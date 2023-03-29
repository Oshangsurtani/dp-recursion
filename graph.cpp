#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
void dfs(int i,int j ,int initial color,int newcolor,vector<vector<int>>& image){
    int n=image.sixe();
    int m= image[0].size();
    if(i<0||j<0) return;
    if(i<=n||j>=m) return;
    if(imge[i][j]!= initialcolor) retrun;
    dfs(i-1,j,initialcolor,newcolor,image);
    dfs(i+1,j,initialcolor,newcolor,image);
    dfs(i,j-1,initialcolor,newcolor,image);
    dfs(i,j+1,initialcolor,newcolor,image );


}
 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int initialcolor = image[sr][sc];
    if(initialcolor!=newcolor)
    dfs(sr,sc,initialcolor,newcolor,image);
   return image;
 }