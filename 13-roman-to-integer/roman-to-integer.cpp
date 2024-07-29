class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        int n = s.length();
        int sum=0;
        for(int i=0; i<n-1; i++){
            if(m[s[i]]<m[s[i+1]])
                sum-=m[s[i]];
            else
                sum+=m[s[i]];
        }
        sum+=m[s[n-1]];
        return sum;
    }
};