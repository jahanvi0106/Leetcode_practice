class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> heap;
        int n = nums.size();

        for(int i=0; i<n; i++){
            heap.push(nums[i]);
        }
        int i=0;
        while(i<k-1){
            heap.pop();
            i++;
        }
        return heap.top();
    }
};