class Solution{
public:
int dp[2515];
vector<<vector<int>path;
int[] lis(int i ,vector<int>&a)
{
    if(dp[i]!=-1)return dp[i];
    int ans=1;
    for(int j=0;j<i;j++){
        if(a[i]>a[j]){
           
        
            ans=max(ans,lis(j,a)+1);
             path[ans].push_back(a[j]);
        }
        
    }
    
    return path[ans];
}
int[] lengthOfLIS(vector<int>&nums){
    memset(dp,-1,sizeof(dp));
    int ans=0;
    
    
    for(int i=0;i<nums.size();i++){
        ans=max(ans,lis(i,nums));
        
    }
    return path[ans];
}
};