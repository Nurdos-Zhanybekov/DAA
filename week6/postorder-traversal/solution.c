#include <stdlib.h>

void postorderHelper(struct TreeNode* root, int** res, int* size) {
    if (root == NULL) return;
    postorderHelper(root->left, res, size);
    postorderHelper(root->right, res, size);
    *res = (int*)realloc(*res, (*size + 1) * sizeof(int));
    (*res)[*size] = root->val;
    (*size)++;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* res = NULL;
    postorderHelper(root, &res, returnSize);
    return res;
}