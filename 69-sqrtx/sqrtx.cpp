class Solution {
public:
    long long mySqrt(long long x) {
        long long i=0;
        if(x==0 || x==1)
            return x;
        while(i<x){
            if((i*i)==x)
                return i;
            else{
                if((i*i)>x){
                    break;
                }
            }
            i++;
        }
        return --i;
    }
};