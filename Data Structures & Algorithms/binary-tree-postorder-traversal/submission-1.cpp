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
    void postorder(vector<int>& otp, TreeNode* node){
        if(node==NULL) return;
        postorder(otp,node->left);
        postorder(otp,node->right);
        otp.emplace_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>otp;
        postorder(otp, root);
        return otp;
    }
};