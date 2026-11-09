#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findPaths(struct TreeNode* node, char* currentPath, char*** res, int* size) {
    if (node == NULL) return;

    char buffer[32];
    sprintf(buffer, "%d", node->val);

    char* nextPath = (char*)malloc(strlen(currentPath) + strlen(buffer) + 3);
    strcpy(nextPath, currentPath);
    if (strlen(currentPath) > 0) {
        strcat(nextPath, "->");
    }
    strcat(nextPath, buffer);

    if (node->left == NULL && node->right == NULL) {
        *res = (char**)realloc(*res, (*size + 1) * sizeof(char*));
        (*res)[*size] = nextPath;
        (*size)++;
        return;
    }

    findPaths(node->left, nextPath, res, size);
    findPaths(node->right, nextPath, res, size);
    free(nextPath);
}

char** binaryTreePaths(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    if (root == NULL) return NULL;
    char** res = NULL;
    findPaths(root, "", &res, returnSize);
    return res;
}