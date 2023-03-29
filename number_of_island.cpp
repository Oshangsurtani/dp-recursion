class Solution {
public:


void dfs(int i, int j,vector<vector<char>>& grid){
     int  n=grid.size();
       int m=grid[0].size();
       grid[i][j]=0;
        if(i>=0 && grid[i][j]==1)
       dfs(i-1,j,grid);
    if(i<n && grid[i][j]==1)
    dfs(i+1,j,grid);
    if(j>=0 && grid[i][j]==1)
    dfs(i,j-1,grid);
    if(j<m && grid[i][j]==1)
    dfs(i,j+1,grid);
    return ;
}
    int numIslands(vector<vector<char>>& grid) {
     int i,j,count=0 ;
      int  n=grid.size();
       int m=grid[0].size();
    
  
       if(grid[i][j]!=0){
     dfs(i,j,grid);
     count++;
     cout<<count<<endl;
     }
     
     
       return count;
    }
};