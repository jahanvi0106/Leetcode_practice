class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        map<long long, vector<int>> m;
        for(int i=0; i<n; i++){
            int temp=nums[i];
            long long val=0;
            int j=0;
            if(temp==0){
                m[mapping[temp]].push_back(temp);
            }
            else{
                while(temp!=0){
                    val+=(mapping[temp%10])*pow(10,j);
                    temp/=10;
                    j++;
                }
                m[val].push_back(nums[i]);
            }
            
        }

        vector<int> ans;
        
        for(auto it : m){
            for(auto x: it.second)
                ans.push_back(x);
        }
        return ans;
    }
};