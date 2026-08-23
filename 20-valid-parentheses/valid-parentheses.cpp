class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> p;
        for(int i=0; i<n; i++){
            if(!empty(p)){
                if(p.top()=='(' && s[i]==')')
                    p.pop();
                else if(p.top()=='[' && s[i]==']')
                    p.pop();
                else if(p.top()=='{' && s[i]=='}')
                    p.pop();
                else
                    p.push(s[i]);
            }
            else
                p.push(s[i]);
        }
        if(p.empty())
            return true;
        else
            return false;
    }
};