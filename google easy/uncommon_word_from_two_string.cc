class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) 
    {
        s1=s1+' '+s2;
        s2="";
        map<string,int> m;
        vector<string> v;
        int j=0;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=' ')
            {
                s2+=s1[i];  
            }
            else if(s1[i]==' ')
            {
                m[s2]++;
                s2="";
            }
        }
        m[s2]++;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
            {
                v.push_back(it->first);
            }
        }
        return v;
    }
};
