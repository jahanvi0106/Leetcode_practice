class Solution {
public:

    int  BinaryExp(int a ,int  b ,int mod ){
        int  ans=1;
        while(b!=0)
        {
            if(b%2) ans = (ans*a)%mod;
            a= (a*1LL*a)%mod;
            b/=2;
        }
        return ans;
    }
    int superPow(int a, vector<int>& b) {
        int p = 0;
        for (int i : b) 
            p = (p * 10 + i) % 1140;
        if (p == 0) 
            p += 1140;
        return BinaryExp(a, p, 1337);
    }
};