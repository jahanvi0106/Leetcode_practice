class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            long long s=0;
            for(int j=i; j<n; j++){
                s += nums[j];
                if(s==k)
                    ans++;
            }
        }
        return ans;
    }
};