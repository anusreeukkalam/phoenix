#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

int dfs(TreeNode* node, int curr) {
    if (!node) return 0;

    curr = curr * 2 + node->val;

    if (!node->left && !node->right)
        return curr;

    return dfs(node->left, curr) + dfs(node->right, curr);
}

int sumRootToLeaf(TreeNode* root) {
    return dfs(root, 0);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(1);
    root->right->right = new TreeNode(1);

    cout << sumRootToLeaf(root) << endl;
 
    return 0;
}   