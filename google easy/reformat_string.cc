class Solution {
public:
    string reformat(string s) 
    {
        int cd=0,ca=0;
        string ds="",res="";
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i])) {
                cd++;
                ds+=s[i];
            }
            else if(isalpha(s[i])) ca++;
        }
        if(cd!=ca && cd-ca!=1 && cd-ca!=-1) return "";
        int j=0;
        if(cd>ca) res+=ds[j++];
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i])) 
            {
                res+=s[i];
                if(j<ds.length())
                    res+=ds[j++];
            }
        }
        return res;
    }
};
