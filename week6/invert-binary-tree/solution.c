#include <stdlib.h>

struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL) return NULL;
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = root->val;
    newNode->left = invertTree(root->right);
    newNode->right = invertTree(root->left);
    return newNode;
}