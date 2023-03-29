class Solution {
public:
vector<int>pre;
    vector<int> postorderTraversal(TreeNode* root) {
          if(root){
           
           
        
        
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        pre.push_back(root->val);}
        return pre;
        
        
    }
};