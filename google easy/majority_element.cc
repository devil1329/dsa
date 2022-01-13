class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int max=0,max_element;
        map<int,int> m;
        for(int i:nums)
            m[i]++;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(max<it->second)
            {
                max=it->second;
                max_element=it->first;
            }
        }
        return max_element;
    }
};
