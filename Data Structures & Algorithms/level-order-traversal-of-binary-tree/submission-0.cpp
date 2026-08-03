class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>part;
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
            q.pop();
                part.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }res.push_back(part);
        }return res;
    }
};
