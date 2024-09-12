class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int allow[26]={0};
        for(int i=0; allowed[i]!='\0'; i++){
            allow[allowed[i]-'a']=1;
        }
        int n = words.size();
        int ans=0;
        for(int i=0; i<n; i++){
            string s=words[i];
            int j=0;
            while(s[j]){
                if(allow[s[j]-'a']!=1){
                    ans++;
                    break;
                }
                j++;
            }
        }
        return n-ans;
    }
};