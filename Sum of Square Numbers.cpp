/*This problem is similiar to two sum */
/*we are checking for b^2 = c - a^2*/

class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        for(long a=0;a*a<=c;a++)
        {
           long b = sqrt(c-a*a);
                if( b*b == c - a*a)
                return true;
            }
        
        return false;
    }
};
