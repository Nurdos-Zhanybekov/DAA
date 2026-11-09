#include <stdlib.h>

void gatherLeftLeaves(struct TreeNode* root, int isLeft, int** vals, int* count) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL && isLeft) {
        *vals = (int*)realloc(*vals, (*count + 1) * sizeof(int));
        (*vals)[*count] = root->val;
        (*count)++;
        return;
    }
    gatherLeftLeaves(root->left, 1, vals, count);
    gatherLeftLeaves(root->right, 0, vals, count);
}

int sumOfLeftLeaves(struct TreeNode* root) {
    int* vals = NULL;
    int count = 0;
    gatherLeftLeaves(root, 0, &vals, &count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += vals[i];
    }
    free(vals);
    return sum;
}