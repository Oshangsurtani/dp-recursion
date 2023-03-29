class Solution {
public:
    int lengthOfLastWord(string s) {
        int j,var,count=0;
        for(j=s.length()-1;j>=0;j--) {
            if(s[j]!=' ') {
                var=j;
                break;
            }
            else {
                count++;
            }
        }
        for(j=var-1;j>=0;j--) {
            if(s[j]==' ') {
                break;
            }
        }
        return s.length()-j-count-1;
    }
};