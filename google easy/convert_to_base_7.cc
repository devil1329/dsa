class Solution {
public:
    string convertToBase7(int N) 
    {
        string s = ""; 
        int b=7,flag=0;
        if(N<0)
        {
            flag=1;
            N*=-1;
        }
        while(N>0)
        {

            if (b==16)
            {
                int rem = N%b;
                if (rem>9)
                {
                    switch (rem)
                    {
                        case 10: s= "A" + s; break;
                        case 11: s= "B" + s; break;
                        case 12: s= "C" + s; break;
                        case 13: s= "D" + s; break;
                        case 14: s= "E" + s; break;
                        case 15: s= "F" + s; break;
                    }
                }
                else
                {
                    s = char(rem+48) +s;
                }
            }
            else
            {
                int rem = N%b;
                s = char(rem+48) +s;
            }
        N = N/b;
        }
        if(s=="") s="0";
        if(flag==1) s="-"+s;
        return s;    
    }
};
