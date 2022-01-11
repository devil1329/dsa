class Solution {
public:
    bool checkRecord(string s) 
    {
        int ctr=0,flag=0;
        for(int i=0;i<s.length();i++)   
        {
            if(s[i]=='A') ctr++;
            if(s[i]=='L')
            {
                i++;
                if(s[i]=='L' && i<s.length())
                {
                    i++;
                    if(s[i]=='L' && i<s.length()) flag=1;
                    else i--;
                }
                else i--;
            }
        }
        cout<<ctr;
        if(flag==1 || ctr>1 ) return false;
        return true;
    }
};
