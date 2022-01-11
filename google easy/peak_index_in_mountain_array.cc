class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int i=0;
        for(i=1;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
                break;
        }
        return i;
    }
};
