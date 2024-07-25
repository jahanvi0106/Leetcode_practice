class Solution {
public:

    void merge(vector<int>& a, int beg, int mid, int end)    
    {    
        int i, j, k;  
        int n1 = mid - beg + 1;    
        int n2 = end - mid;    
        
        vector<int> l, r;  
          
        for (int i = 0; i < n1; i++)    
            l.push_back(a[beg + i]);    
        for (int j = 0; j < n2; j++)    
            r.push_back(a[mid + 1 + j]);    
    
        i = 0,  
        j = 0;   
        k = beg; 
        
        while (i < n1 && j < n2){    
            if(l[i] <= r[j]){    
                a[k] = l[i];    
                i++;    
            }    
            else{    
                a[k] = r[j];    
                j++;    
            }    
            k++;    
        }    
        while (i<n1){    
            a[k] = l[i];    
            i++;    
            k++;    
        }    
        
        while (j<n2){    
            a[k] = r[j];    
            j++;    
            k++;    
        }    
    }    

    void merge_sort(vector<int>& v, int l, int h){
        if(l<h){
            int mid = (l+h)/2;
            merge_sort(v,l,mid);
            merge_sort(v,mid+1,h);
            merge(v,l,mid,h);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        merge_sort(nums,0,n-1);
        return nums;
    }
};