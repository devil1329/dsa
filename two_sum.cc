#include<algorithm>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> v;
        int j=-1;
        for(int i=0;i<nums.size();i++)
        {
            int s=target-nums[i];
            for(j=0;j<nums.size();j++)
            {
                if(s==nums[j] && i<j)
                {
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};
