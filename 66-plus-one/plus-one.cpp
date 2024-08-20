class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int s = digits.size();
        int c=1;
        int i=0;
        while(c && i<s){
            if((digits[i]+1)<10){
                digits[i]+=1;
                c=0;
            }
            else{
                digits[i]=(digits[i]+1)%10;
                i++;
            }
        }
        if(c==1)
            digits.push_back(1);
        reverse(digits.begin(),digits.end());
        return digits; 
    }
};