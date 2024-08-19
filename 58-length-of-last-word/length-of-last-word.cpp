class Solution {
public:
    int lengthOfLastWord(string s) {
        string t;
        stringstream ss(s);
        vector<string> v;

        while (getline(ss, t, ' ')) 
            v.push_back(t);

        int n = v.size();
        int i=n-1;
        while(v[i].length()==0){
            i--;
        }
        int ans = v[i].length();
        return ans;
    }
};