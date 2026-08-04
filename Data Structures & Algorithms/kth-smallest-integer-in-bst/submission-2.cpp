class Solution {
public:
    int inorder(TreeNode* root, int &k) {
        if (!root)
            return -1;

        int left = inorder(root->left, k);
        if (left != -1)
            return left;

        if (--k == 0)
            return root->val;

        return inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        return inorder(root, k);
    }
};