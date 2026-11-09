#include <stdlib.h>

void preorderHelper(struct TreeNode* root, int** res, int* size) {
    if (root == NULL) return;
    *res = (int*)realloc(*res, (*size + 1) * sizeof(int));
    (*res)[*size] = root->val;
    (*size)++;
    preorderHelper(root->left, res, size);
    preorderHelper(root->right, res, size);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* res = NULL;
    preorderHelper(root, &res, returnSize);
    return res;
}