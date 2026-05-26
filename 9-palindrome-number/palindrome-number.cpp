class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            vector<int> v;
            while(x!=0){
                v.push_back(x%10);
                x/=10;
            }
            int l = v.size();

            for(int i=0; i<l/2; i++){
                if(v[i]!=v[l-i-1])
                    return false;
            }
            return true;
        }
    }
};