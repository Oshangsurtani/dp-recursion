class Solution {
public:
vector<int>Inorder;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root){
       
        inorderTraversal(root->left);
        Inorder.push_back(root->val);
        inorderTraversal(root->right);}
    return Inorder;
    }
};