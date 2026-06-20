class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int n = nums.size();
        int c=0;

        for(int i=0; i<n; i++){
            if(nums[i]==1)
                c++;
            if(max<c)
                max=c;
            if(nums[i]==0)
                c=0;
        }
        return max;
    }
};