class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0; 
        int high = n-1;

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]==target)
                return true;
            if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<nums[mid])
                    high--;
                else
                    low++;
            }
            else{
                if(target<=nums[high] && target>nums[mid])
                    low++;
                else
                    high--;
            }
        }
        return false;
    }
};