class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        map <char,int> m;
        for(char c:s)
            m[c]++;
        for(char c:t)
            m[c]--;
        int flag=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0) return true;
        return false;
    }
};
