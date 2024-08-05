class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> m;
        int n = arr.size();
        string ans="";
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        int c=0;
        for(int i=0; i<n; i++){
            if(m[arr[i]]==1){
                if(c<k-1)
                    c++;
                else{
                    ans=arr[i];
                    break;
                }
            }
                
        }
        return ans;
    }
};