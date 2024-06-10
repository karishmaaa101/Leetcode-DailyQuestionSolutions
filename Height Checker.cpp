/**Leetcode-Easy**/

class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        
       int s=heights.size();
       int count=0;
       vector<int> expected=heights;
       sort(expected.begin(),expected.end());

        for(int i=0;i<s;i++)
        {
            if(heights[i]!= expected[i])
            count++;
        }
        return count;
    }
};
