class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        int ans;
        if(m>n)
            return -1;
        
        int i=0, j=0;
        while(i<n && j<m){
            if(haystack[i]==needle[j]){
                ans=i;
                int k=i;
                while(haystack[k]==needle[j] && j<m && k<n){
                    k++;
                    j++;
                }
                if(j==m)
                    return ans;
                else
                    j=0;
            }
            i++;
        }
        return -1;
    }
};