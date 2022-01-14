class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int n=p.size();
        int profit=0,min_value=p[0];
        for(int i=1;i<n;i++)
        {
            if(min_value>p[i])
                min_value=p[i];
            else if(p[i]-min_value>profit)
                profit=p[i]-min_value;
        }
        return profit;
    }
};
