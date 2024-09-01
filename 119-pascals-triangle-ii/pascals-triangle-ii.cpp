class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        int i=1;
        while(i<=rowIndex){
            if(i==1){
                ans.push_back(1);
            }
            else{
                int j=0;
                vector<int> temp;
                temp.push_back(1);
                while(j<i-1){
                    temp.push_back(ans[j]+ans[j+1]);
                    j++;
                }
                temp.push_back(1);
                ans=temp;
            }
            i++;
        }
        return ans;
    }
};