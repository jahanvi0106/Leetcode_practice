class Solution {
public:

    vector<int> nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int br = -1;
        for(int i=n-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                br=i-1;
                break;
            }
        }
        if(br==(-1))
            reverse(nums.begin(),nums.end());
        
        else{
            for(int i=n-1; i>=0; i--){
                if(nums[i]>nums[br]){
                    swap(nums[i],nums[br]);
                    break;
                }
            }
            reverse(nums.begin()+br+1,nums.end());
        }
        return nums;
    }

    int getFactorial(int n){
        if(n==1)
            return n;
        return n * getFactorial(n-1); 
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int fact = getFactorial(n);

        for(int i=0; i<fact; i++){
            vector<int> temp;
            temp = nextPermutation(nums);
            ans.push_back(temp);
            nums = temp;
        }
        return ans;
    }
};