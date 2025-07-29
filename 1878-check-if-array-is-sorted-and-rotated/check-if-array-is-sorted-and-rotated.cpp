class Solution {
public:
    bool check(vector<int>& nums) {
        int s = nums.size();
        int n=0;
        for(int i=1; i<s; i++){
            if(nums[i-1]>nums[i])
                n++;
        }
        if(nums[s-1]>nums[0])
            n++;
        return n<=1;
    }
};