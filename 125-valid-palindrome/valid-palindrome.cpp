class Solution {
public:
    bool isPalindrome(string s) {
        for (auto& x : s) { 
            x = tolower(x); 
        }
        string temp="";
        for(int i=0; s[i]!='\0'; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                temp+=s[i];
        }
        cout<<temp;
        int n = temp.length();
        for(int i=0; i<n/2; i++){
            if(temp[i]!=temp[n-1-i])
                return false;
        }
        return true;
    }
};