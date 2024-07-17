class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        
        while(n!=1){
            n/=2;
            int nw[n];
            for(int i=0; i<n; i++){
                if(i%2==0)
                    nw[i] = min(nums[2*i],nums[2*i+1]);
                else
                    nw[i] = max(nums[2*i],nums[2*i+1]);
            }
            for(int i=0; i<n; i++){
                nums[i]=nw[i];
            }
        }
        return nums[0];
    }
};