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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        
        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);
        
        return leaves1 == leaves2;
    }

    void getLeaves(TreeNode* tree, vector<int>& leaves){
        if (tree == nullptr) return;

        if (tree->left == nullptr && tree->right == nullptr){
            leaves.push_back(tree->val);
            return;
        }

        getLeaves(tree->left, leaves);
        getLeaves(tree->right, leaves);
    }
};