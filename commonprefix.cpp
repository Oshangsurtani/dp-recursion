class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string s;
      int length;
       length=strs[0].length();

    
int i,j;
       for( i=0;i<length;i++){
          int   flag=1;
       for(j=0;j<strs.size()-1;j++){
         if(strs[j][i]==strs[j+1][i]){
        
         flag++;
         continue;}
          break;
          break;
        }
       if(flag==strs.size()){
          s+=strs[j][i];
       }
       break;
       } 
       return s;
    }
};
/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int a=strs.size();
        string n=strs[0],m=strs[a-1],ans="";
        for(int i=0;i<n.size();i++){
            if(n[i]==m[i]){ans+=n[i];}
            else break;
        }
        return ans;
        
    }
};*/
/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str0=strs[0];
        string subscribeToMrbeast;
        for (int i = 0; i  < str0.length(); i++)//poopoo head
        {
            for (int j = 1; j  < strs.size(); j++)//poopoo head
            {
                if (strs[j][i] != str0[i]) return subscribeToMrbeast;
            }
            subscribeToMrbeast+=str0[i];
        }
        return subscribeToMrbeast;
    }
};*/