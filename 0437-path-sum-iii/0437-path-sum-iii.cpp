/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}};
 */
class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return 0;
        }

        return dfs(root, targetSum) + pathSum(root->right, targetSum) + pathSum(root->left, targetSum);
    }

    int dfs(TreeNode* node, long long sum){
        if (node == nullptr) {
            return 0;
        }
        int count = 0;

        if (node->val == sum) {
            count = 1;
        }

        count += dfs(node->left, sum - node->val);
        count += dfs(node->right, sum - node->val);
        
        return count;
    }
};