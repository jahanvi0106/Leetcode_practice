class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mg;
        int i=0, j=0;
        int n1=nums1.size();
        int n2=nums2.size();
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                mg.push_back(nums1[i]);
                i++;
            }
            else{
                mg.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1){
            mg.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            mg.push_back(nums2[j]);
            j++;
        }
        double ans;
        if((n1+n2)%2==0)
            ans = (double)(mg[(n1+n2)/2-1]+mg[(n1+n2)/2])/2;
        else
            ans = mg[(n1+n2-1)/2];
        return ans;
    }
};