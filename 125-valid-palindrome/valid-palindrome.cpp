class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        for (auto& x : s) {
            x = tolower(x);
        }
        if(n<=1)
            return true;
        vector<char> v;
        // cout<<n<<endl;
        for(int i=0; i<n; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                v.push_back(s[i]);
        }
        // cout<<endl;
        n=v.size();

        if(n==0)
            return true;
        for(int i=0; i<=n/2; i++){
            // cout<<v[i];
            if(v[i]!=v[n-i-1])
                return false;
        }
        return true;
    }
};