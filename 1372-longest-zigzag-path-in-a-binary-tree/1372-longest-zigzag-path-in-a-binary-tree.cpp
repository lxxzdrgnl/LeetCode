/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int maxCount = 0;

    int longestZigZag(TreeNode* root) {
        dfs(root->left, 0, 1);
        dfs(root->right, 1, 1);

        return maxCount;
    }

    // 0 : left, 1 right
    void dfs(TreeNode* node, int from, int count){
        if (!node) return;
        
        maxCount = max(maxCount, count);

        if (from == 0){
            dfs(node->left, 0, 1);
            dfs(node->right, 1, count + 1);
        } else{
            dfs(node->left, 0, count + 1);
            dfs(node->right, 1, 1);
        }
    }
};