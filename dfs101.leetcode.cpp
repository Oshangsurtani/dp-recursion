
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both are NULL
        if (!p && !q) return true;
        // If anyone is NULL then they were not same
        // Also Comparing values.
        if (!p || !q || p->val != q->val) return false;
        // Go to left and right subtree.
        return(isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};