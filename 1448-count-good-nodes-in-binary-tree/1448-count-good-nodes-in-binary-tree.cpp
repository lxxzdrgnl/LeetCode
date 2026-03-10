/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        int count = 0;

        check(root, root->val, count);

        return count;
    }

    void check(TreeNode* tree, int curMax, int& count) {
        if (tree == nullptr)
            return;

        if (tree->val >= curMax) {
            count++;
            curMax = tree->val;
        }

        check(tree->left, curMax, count);
        check(tree->right, curMax, count);
    }
};