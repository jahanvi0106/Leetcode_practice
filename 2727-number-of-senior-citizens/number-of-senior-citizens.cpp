class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int c=0;
        for(int i=0; i<n; i++){
            if(details[i][10]=='F' || details[i][10]=='M' || details[i][10]=='O'){
                if(details[i][11]=='6' && details[i][12]>'0')
                    c++;
                else if(details[i][11]>'6')
                    c++;
            }
            
        }
        return c;
    }
};