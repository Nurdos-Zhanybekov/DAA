#include <stdlib.h>

struct TreeNode* copyTree(struct TreeNode* root) {
    if (root == NULL) return NULL;
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = root->val;
    newNode->left = copyTree(root->left);
    newNode->right = copyTree(root->right);
    return newNode;
}

struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2) {
    if (root1 == NULL && root2 == NULL) return NULL;
    if (root1 == NULL) return copyTree(root2);
    if (root2 == NULL) return copyTree(root1);

    struct TreeNode* merged = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    merged->val = root1->val + root2->val;
    merged->left = mergeTrees(root1->left, root2->left);
    merged->right = mergeTrees(root1->right, root2->right);
    return merged;
}