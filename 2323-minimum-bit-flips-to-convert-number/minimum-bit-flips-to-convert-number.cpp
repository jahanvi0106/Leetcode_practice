class Solution {
public:
    vector<int> toBinary(int n){
        vector<int> v;
        while(n>0){
            v.push_back(n%2);
            n/=2;
        }
        return v;
    }
    int minBitFlips(int start, int goal) {
        vector<int> s = toBinary(start);
        vector<int> g = toBinary(goal);
        int ss = s.size();
        int gs = g.size();
        if(ss>gs){
            int i=ss-gs;
            while(i--)
                g.push_back(0);
        }
        if(ss<gs){
            int i=gs-ss;
            while(i--)
                s.push_back(0);
        }
        // for(auto i: s)
        //     cout<<i;
        // cout<<endl;
        // for(auto i: g)
        //     cout<<i;
        // cout<<endl;
        ss=s.size();
        int flip=0;
        for(int i=0; i<ss; i++){
            if(s[i]!=g[i])
                flip++;
        }
        return flip;
    }
};