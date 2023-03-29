class Solution {
    private:
    bool check(TreeNode* root,int targetSum,int sum){
        if(root==NULL) return false;
    if(root->left==NULL && root->right==NULL){//that must be a leaf noderecr
        if(sum+root->val ==targetSum) return true;
        else return false;
    }
    sum=sum+root->val;
  bool lefti=check(root->left,targetSum,sum);
             
   bool righty=check(root->right,targetSum,sum);
    sum=sum-root->val;
     return lefti || righty;//if any path returns true the answer should be true
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
           if(root==NULL) return false;
           int sum=0;
         return  check(root,targetSum,sum);
        }
};
//please upvote if found helpful