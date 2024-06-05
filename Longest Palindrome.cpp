
class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        unordered_map<char,int>freq;
        for(auto c:s)
        freq[c]++;

        bool isOdd = false;
        for(auto& it:freq)
        {
            if(it.second%2==0)
            ans+=it.second;
            else
            {
                ans+= it.second-1;
                isOdd = true;
            } 
        }
        if(isOdd)
        ans++;
        //return ans + isOdd;
        return ans;
    }
};
