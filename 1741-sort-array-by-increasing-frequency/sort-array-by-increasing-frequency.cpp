class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();

        for(int i=0; i<n; i++){
            m[nums[i]]++;
        } 
        vector<pair<int, int> > pairs; 
  
        for (auto& it : m) { 
            pairs.push_back(it); 
        } 

        sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) { 
            return (a.second!=b.second ? a.second<b.second : a.first>b.first); 
        }); 
    
        // cout << "Map after soring:" << endl; 
        // for (auto& pair : pairs) { 
        //     cout << pair.first << ": " << pair.second << endl; 
        // } 
        int j=0;
        for(auto&pair : pairs){
            while(pair.second--){
                nums[j]=pair.first;
                j++;
            }
        }
        return nums;
    }
};