class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int n=arr.size(),j=0,i,ans;
        vector<int> v;
        for(i=1;j<n;i++)
        {
            if(arr[j]>i)
            {
                v.push_back(i);
            }
            else if(arr[j]<i)
            {
                i--;
                j++;
            }
        }
        v.push_back(i);
        if(k > v.size()) 
            ans=v[v.size()-1]+k-v.size();
        else
            ans=v[k-1];
        v.clear();
        return ans;
    }
};
