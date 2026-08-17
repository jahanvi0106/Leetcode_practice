class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int n = nums1.size();
        int m = nums2.size();
        int i=0, j=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            v.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            v.push_back(nums2[j]);
            j++;
        }
        int s = v.size();
        double ans=0;
        if(s%2==1){
            ans = v[(s-1)/2];
        }
        else{
            ans = (double)(v[(s-1)/2]+v[(s+1)/2])/2;
        }
        return ans;
    }
};