class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int i;
        if(k<=n)
            i=k;
        else{
            i=k%n;
        }
        vector<int> arr(n);
        int j=0;
        while(i<n){
            arr[i]=nums[j];
            i++;
            j++;
        }
        i=0;
        while(j<n){
            arr[i]=nums[j];
            i++;
            j++;
        }
        for(i=0; i<n; i++){
            nums[i]=arr[i];
        }
    }
};