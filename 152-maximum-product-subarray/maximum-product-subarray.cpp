class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        long long m=nums[0];
        long long pre=1;
        long long suf=1;
        for(int i=0; i<n; i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;

            pre*=nums[i];
            suf*=nums[n-1-i];

            m = max(m, max(pre,suf));
            
        }
        
        return m;
    }
};