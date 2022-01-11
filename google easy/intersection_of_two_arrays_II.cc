class Solution {
public:
    vector<int> intersect(vector<int>& a1, vector<int>& a2) 
    {
        int n1=a1.size(),n2=a2.size();
        sort(a1.begin(),a1.end());
	    sort(a2.begin(),a2.end());
        vector<int> res;
        while(!a1.empty() && !a2.empty())
        {
            if(a1[0]==a2[0])
            {
                res.push_back(a1[0]);
                a1.erase(a1.begin());
                a2.erase(a2.begin());
            }
            else
            {
                if(a1[0]>a2[0])
                {
                    a2.erase(a2.begin());
                }
                else
                {
                    a1.erase(a1.begin());
                }
            }
        }
        return res;
    }
};
