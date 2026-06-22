class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l=0,r=0;
        int n = nums.size();

        vector<int> pos, neg, ans;

        for(int i=0; i<n; i++){
            if(nums[i]<0)
                neg.push_back(nums[i]);
            else    
                pos.push_back(nums[i]);
        }

        for(int i=0; i<n; i++){
            if(i%2==0){
                ans.push_back(pos[l]);
                l++;
            }
            else{
                ans.push_back(neg[r]);
                r++;
            }
        }
        return ans;
    }
};