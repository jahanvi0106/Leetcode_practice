class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int s = original.size();
        vector<vector<int>> ans;
        if(m*n!=s)
            return ans;
        int i=0;
        while(i<s){
            int r=0;
            int c=0;
            vector<int> row;
            while(c<n && i<s){
                row.push_back(original[i]);
                c++;
                i++;
            }
            ans.push_back(row);
            r++;
        }
        return ans;
    }
};