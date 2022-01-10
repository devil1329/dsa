class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector <int> res;
        map <int,int> m;
        for(int i: nums1)
	    {
		    m[i]++;
	    }
	    for(int i: nums2)
	    {
		    if(m[i]!=0)
		    {
			    res.push_back(i);
			    m.erase(i);
		    }
	    }
        return res;
    }
};
