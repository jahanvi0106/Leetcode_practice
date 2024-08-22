class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1 || n==2)
            return n;
        int a=0;
        int b=1;
        int ans;
        while(n--){
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};