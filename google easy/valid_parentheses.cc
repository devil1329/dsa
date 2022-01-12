class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]==')' && !st.empty())
            {
                if(st.top()=='(')
                    st.pop();
                else
                    st.push(s[i]);
                continue;
            }
            else if(s[i]=='}' && !st.empty())
            {
                if(st.top()=='{')
                    st.pop();
                else
                    st.push(s[i]);
                continue;
            }
            else if(s[i]==']' && !st.empty())
            {
                if(st.top()=='[')
                    st.pop();
                else
                    st.push(s[i]);
                continue;
            }
            st.push(s[i]);
        }
        if(st.empty()) return true;
        return false;
    }
};
