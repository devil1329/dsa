class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        map <int,int> m;
        for(int i:nums)
        {
            m[i]++;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>1)
                return true;
        }
        return false;
    }
};
