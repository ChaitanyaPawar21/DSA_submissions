class Solution {
public:
    bool traverse(TreeNode* root1, TreeNode* root) {
        if (root1 == NULL && root == NULL) return true;
        if (root1 == NULL || root == NULL) return false;
        if (root1->val != root->val) return false;

        return traverse(root1->left, root->left) &&
               traverse(root1->right, root->right);
    }

    bool NodeFind(TreeNode* root, TreeNode* subroot) {
        if (root == NULL) return false;

        // Candidate found
        if (root->val == subroot->val && traverse(root, subroot))
            return true;

        // Otherwise keep searching
        return NodeFind(root->left, subroot) ||
               NodeFind(root->right, subroot);
    }

    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        return NodeFind(root, subroot);
    }
};