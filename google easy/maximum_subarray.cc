class Solution {
public:
    int maxSubArray(vector<int>& a) 
    {
        int maxsum=a[0],sum=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            maxsum=max(maxsum,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxsum;
    }             
};
