class Solution {
public:
    long convert_to_binary(int n)
    {
        int rem=0;
        long b=0,i=1;
        while(n!=0)
        {
            rem=n%2;
            n/=2;
            b=b+(rem*i);
            i*=10;
        }
        return b;
    }
    
    vector<int> countBits(int n) 
    {
        vector <int> v;
        for(int i=0;i<=n;i++)
        {
            v.push_back(i);
            long a=convert_to_binary(i);
            int ctr=0;
            while(a>0)
            {
                int temp=a%10;
                if(temp==1) ctr++;
                a/=10;
            }
            v[i]=ctr;
        }
        return v;
    }
};
