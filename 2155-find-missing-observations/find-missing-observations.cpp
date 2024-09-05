class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int s = rolls.size();
        int sum=0;
        for(int i=0; i<s; i++){
            sum+=rolls[i];
        }
        int ans_sum = (mean*(n+s)-sum);
        cout<<ans_sum;
        if(n*6<ans_sum || n>ans_sum){
            return {};
        }
        int new_mean = ans_sum/n;
        int mod = ans_sum % n;
        vector<int> ans(n,new_mean);
        for(int i=0; i<mod; i++){
            ans[i]++;
        }
        return ans;
    }
};