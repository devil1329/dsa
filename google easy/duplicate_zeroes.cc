class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        vector <int> v;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                v.push_back(0);
            v.push_back(arr[i]);
            arr[i]=v[i];
        }
    }
};
