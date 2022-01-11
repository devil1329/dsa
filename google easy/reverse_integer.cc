class Solution {
public:
    int reverse(long x) 
    {
        long flag=0;
        long num=0;
        if(x<0)
        {
            x=x*-1;
            flag=1;
        }
        while(x>0)
        {
            num=num*10+(x%10);
            x=x/10;
        }
        if(flag==1)
        {
            num=num*-1;
        }
        flag=pow(2,31);
        if(num<(flag*-1) || num>(flag-1))
            return 0;
        return (int)num;
    }
};
