class Solution {
public:
    int mySqrt(int x) 
    {
        long sqrt=1;
        while(sqrt*sqrt < x)
        {
            sqrt++;
        }
        if(sqrt*sqrt != x) sqrt--;
        return sqrt;
    }
};
