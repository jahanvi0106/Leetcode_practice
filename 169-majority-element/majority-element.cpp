class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int c=0;
        int e=arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]==e){
                c++;
            }
            if(arr[i]!=e){
                if(c==0)
                    e=arr[i];
                if(c!=0)
                    c--;
            }
        }
        return e;
    }
};