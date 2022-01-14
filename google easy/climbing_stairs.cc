class Solution {
public:
    int count(int n)
    {
        if(n==0) return 1;
        else if(n<0) return 0;
        return count(n-1)+count(n-2);
    }
    
    int climbStairs(int n) 
    {
        int a=1,b=1,ctr=1;
        for(int i=2;i<=n;i++)
        {
            ctr=a+b;
            a=b;
            b=ctr;
        }
        return ctr;
        return count(n);
    }
};
