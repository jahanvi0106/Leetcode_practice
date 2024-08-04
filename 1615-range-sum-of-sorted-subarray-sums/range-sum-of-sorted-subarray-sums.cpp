class Solution {
public:
    unsigned int mod = 1000000007;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>> pq;
        int ans=0;
        for(int i=0; i<n; i++){
            pq.push({nums[i],i});
        }
        for (int i = 1; i <= right; i++) {
            auto p = pq.top();
            pq.pop();
            
            if (i >= left) 
                ans = (ans + p.first) % mod;
            
            if (p.second < n - 1) {
                p.first += nums[++p.second];
                pq.push(p);
            }
        }
        return ans;
    }
};