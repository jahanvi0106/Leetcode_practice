class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int f=0, s=1;
        while(f<=s && s<n){
            if(nums[f]==0) {
                while(nums[s]==0 && s<n-1)
                    s++;
                swap(nums[f],nums[s]);
                f++;
                s++;
            }
            else{
                f++;
                s++;
            }
        }
    }
};