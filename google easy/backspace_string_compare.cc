class Solution {
public:
    string fstr(string s)
    {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#' && !st.empty())
            {
                st.pop();
                continue;
            }
            if(s[i]!='#')
                st.push(s[i]);
        }
        s="";
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
    
    bool backspaceCompare(string s, string t) 
    {
        s=fstr(s);
        cout<<s;
        t=fstr(t);
        if(s==t) return true;
        return false;
    }
};
