class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(val>50)
            return n;
        if(n==1 && nums[0]==val){
            return 0;
        }
        int i=0, j=n-1;
        while(i<=j && j<n){
            if(nums[i]==val){
                if(i==j)
                    return i;
                while(nums[j]==val && j>i){
                    if(j==i+1)
                        return i;
                    j--;
                }
                nums[i]=nums[j];
                j--;
            }
            i++;
        }
        return i;
    }
};