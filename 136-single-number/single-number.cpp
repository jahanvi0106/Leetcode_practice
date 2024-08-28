class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();
        int ans;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        for(auto i: m){
            if(i.second==1){
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};