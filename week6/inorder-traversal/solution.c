#include <stdlib.h>

void inorderHelper(struct TreeNode* root, int** res, int* size) {
    if (root == NULL) return;
    inorderHelper(root->left, res, size);
    *res = (int*)realloc(*res, (*size + 1) * sizeof(int));
    (*res)[*size] = root->val;
    (*size)++;
    inorderHelper(root->right, res, size);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* res = NULL;
    inorderHelper(root, &res, returnSize);
    return res;
}