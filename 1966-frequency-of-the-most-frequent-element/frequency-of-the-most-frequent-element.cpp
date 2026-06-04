class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        long long int n = nums.size();
        long long int ans=0;
        long long int l=0, r=0, sum=0;
        for(int r=0; r<n; r++){
            sum+=nums[r];

            while(l+1<=r && (nums[r]* (r-l+1) > sum+k)){
                sum -= nums[l];
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};