class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int arr[201];
        int n = nums.size(); 
        for(int i=0; i<n; i++){
            arr[nums[i]+100]=1;
        }
        int ans=0;
        for(int i=0; i<201; i++){
            if(arr[i]==1){
                nums[ans]=i-100;
                ans++;
            }
        }
        return ans;
    }
};