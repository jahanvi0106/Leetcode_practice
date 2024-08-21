class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        reverse(a.begin(), a.end());
        reverse(b.begin(),b.end());
        int i=0, j=0;
        char c='0';
        while(a[i]!='\0' && b[j]!='\0'){
            if(a[i]=='1' && b[j]=='1' && c=='1'){
                ans=ans+'1';
                c='1';
            }
            else if((a[i]=='1' && b[j]=='0' && c=='1') || (a[i]=='0' && b[j]=='1' && c=='1') || (a[i]=='1' && b[j]=='1' && c=='0')){
                ans=ans+'0';
                c='1';
            }
            else if((a[i]=='0' && b[j]=='0' && c=='1') || (a[i]=='1' && b[j]=='0' && c=='0') || (a[i]=='0' && b[j]=='1' && c=='0')){
                ans=ans+'1';
                c='0';
            }
            else
                ans=ans+'0';
            cout<<ans<<" ";
            i++;
            j++;
        }
        cout<<endl;
        while(a[i]!='\0'){
            if(c=='1' && a[i]=='1'){
                ans=ans+'0';
                c='1';
            }
            else if(c=='0' && a[i]=='0'){
                ans=ans+'0';
            }
            else{
                ans=ans+'1';
                c='0';
            }
            i++;
        }
        while(b[j]!='\0'){
            if(c=='1' && b[j]=='1'){
                ans=ans+'0';
                c='1';
            }
            else if(c=='0' && b[j]=='0'){
                ans=ans+'0';
            }
            else{
                ans=ans+'1';
                c='0';
            }
            j++;
        }
        if(c=='1')
            ans=ans+'1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};