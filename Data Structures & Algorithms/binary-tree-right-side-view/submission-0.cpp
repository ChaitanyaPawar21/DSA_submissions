class Solution {
public:
    void traverse(TreeNode* root, vector<int>& res,int level){
        if(root==NULL) return;
        if(level==res.size()){
            res.push_back(root->val);
        }
        traverse(root->right,res,level+1);
        traverse(root->left,res,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        traverse(root,res,0);   
        return res;     
    }
};
