class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int arr[2501] = {0};
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                arr[grid[i][j]]++;
            }
        }
        vector<int> ans;
        int r,m;
        for(int i=1; i<=n*n; i++){
            cout<<arr[i]<<" ";
            if(arr[i]==2)
                r=i;
            else if(arr[i]==0)
                m=i;
        }
        ans.push_back(r);
        ans.push_back(m);
        return ans;
    }
};