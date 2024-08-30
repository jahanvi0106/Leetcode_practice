class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        int n=nums1.size();
        int l = nums2.size();

        for(int i=0; i<n; i++){
            m[nums1[i]]=1;
        }
        vector<int> ans;
        for(int i=0; i<l; i++){
            if(m[nums2[i]]==1)
                m[nums2[i]]=2;
        }
        for(auto it:m){
            if(it.second==2)
                ans.push_back(it.first);
        }
        return ans;
    }
};