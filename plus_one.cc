class Solution {
public:
    void rec(vector<int>& d,int n)
    {
        if(n==0)
        {
            d[n]=0;
            return;
        }
        d[n]=0;
        d[n-1]+=1;
        if(d[n-1]==10)
        {
            rec(d,n-1);
        }
        else
            return ;
        
    }
    vector<int> plusOne(vector<int>& d) 
    {
        int n=d.size();
        d[n-1]+=1;
        if(d[n-1]==10)
        {
            rec(d,n-1);
        }
        if(d[0]!=0)
            return d;
        vector<int> res;
        res.push_back(1);
        for(int i:d)
            res.push_back(i);
        return res;
    }
};
