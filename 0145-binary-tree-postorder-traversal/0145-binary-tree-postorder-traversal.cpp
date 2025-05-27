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

    vector<int> solve(TreeNode* node, vector<int>&v){
        if(node == NULL) return v;
        solve(node->left,v);
        solve(node->right,v);
        v.emplace_back(node->val);
        return v;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        solve(root,v);
        return v;
    }
};