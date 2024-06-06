class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int k = 1; k<s.length();k++){
           ans+= abs(s[k] - s[k-1]);
        }
        return ans;
    }
};
