#include <stdbool.h>
#include <stdlib.h>

void collectSums(struct TreeNode* node, int current, int** sums, int* count) {
    if (node == NULL) return;
    current += node->val;
    if (node->left == NULL && node->right == NULL) {
        *sums = (int*)realloc(*sums, (*count + 1) * sizeof(int));
        (*sums)[*count] = current;
        (*count)++;
        return;
    }
    collectSums(node->left, current, sums, count);
    collectSums(node->right, current, sums, count);
}

bool hasPathSum(struct TreeNode* root, int targetSum) {
    if (root == NULL) return false;
    int* sums = NULL;
    int count = 0;
    collectSums(root, 0, &sums, &count);
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (sums[i] == targetSum) {
            found = true;
        }
    }
    free(sums);
    return found;
}