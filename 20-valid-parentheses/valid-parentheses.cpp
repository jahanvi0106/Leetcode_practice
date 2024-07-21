class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(int i=0; s[i]!='\0'; i++){
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
        if(empty(p))
            return 1;
        else
            return 0;
    }
};