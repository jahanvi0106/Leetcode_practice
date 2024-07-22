class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = strs[0];
        for(int i=1; i<n; i++){
            int s = strs[i].length();
            int j=0;
            string temp = "";
            while(j<s && strs[i][j]==ans[j]){
                temp+=ans[j];
                j++;
            }
            ans=temp;
        }
        return ans;
    }
};