int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;
    if (maxDepth(root->left) > maxDepth(root->right)) {
        return 1 + maxDepth(root->left);
    } else {
        return 1 + maxDepth(root->right);
    }
}