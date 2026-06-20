class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s0 = 0;
        int s1 = 0;
        int s2 = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0)
                s0++;
            if(nums[i]==1)
                s1++;
            if(nums[i]==2)
                s2++;
        }
        int i=0;
        while(s0--){
            nums[i]=0;
            i++;
        }
        while(s1--){
            nums[i]=1;
            i++;
        }
        while(s2--){
            nums[i]=2;
            i++;
        }
    }
};