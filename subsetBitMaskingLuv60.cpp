class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      int n=nums.size();
      int subset_ct=(1<<n);//n^2
     vector<vector<int>>subsets;
      for(int mask =0 ;mask<subset_ct;++mask){
          vector<int>subset;
      //vector with index of array and bitmask(both  are same)
      for(int i=0;i<n;++i){
          if((mask&(1<<i))!=0){
          subset.push_back(nums[i]);
      }}
      subsets.push_back(subset);

    }
    //o(n*2^n)recursion subset generation was better O(2^n)
    return subsets ;}
};