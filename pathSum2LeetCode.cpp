class Solution {
public:
vector<vector<int>>path;
vector<int>v;
int subtree_sum;
int i=0;
     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) {return path;}
v.push_back(root->val);
//  just a problem not getting what to do  when  leaf is not there 
//then how to exclude the current root->val maybe something related to 
//depth may be there if(depth[root->val]==depth[])
if(root->left==nullptr && root->right==nullptr && root->val==targetSum){
path.push_back(v);
v.erase(v.begin()+1,v.end());}
if(root->left==nullptr && root->right==nullptr&&root->val!=targetSum){
    v.pop_back();
}



 return pathSum(root->left,targetSum-root->val) ,pathSum(root->right,targetSum-root->val);
return path;
    }
};