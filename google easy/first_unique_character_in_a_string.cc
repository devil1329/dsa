class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,int> m;
        char chr;
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        for(int i=0;i<s.length();i++)
        {
            auto it = m.find(s[i]);
            if(it->second==1)
                return i;
        }
        return -1;
    }
};
