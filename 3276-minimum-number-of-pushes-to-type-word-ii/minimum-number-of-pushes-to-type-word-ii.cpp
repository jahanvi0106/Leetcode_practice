class Solution {
public:
    int minimumPushes(string word) {
        int arr[26]={0};
        for(int i=0; word[i]!='\0'; i++){
            arr[word[i]-'a']++;
        } 
        sort(arr,arr+26);
        reverse(arr,arr+26);
        int ans=0;
        for(int i=0; i<26; i++){
            if(i<8)
                ans+=arr[i];
            else if(i>=8 && i<16)
                ans+=(arr[i]*2);
            else if(i>=16 && i<24)
                ans+=(arr[i]*3);
            else 
                ans+=(arr[i]*4);
        }
        return ans;
    }
};