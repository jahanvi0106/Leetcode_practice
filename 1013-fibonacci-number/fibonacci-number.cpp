class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        if(n==0)
            return 0;
        int temp=1;

        for(int i=1; i<n; i++){
            temp = (a+b);
            a=b;
            b=temp;
        }
        return temp;
    }
};