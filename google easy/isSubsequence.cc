class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        stack <char> st;
        for(char c:s)
        {
            if(isalpha(c))
                st.push(c);
        }
        for(int i=t.length()-1;i>=0;i--)
        {
            if(st.empty()) return true;
            if(t[i]==st.top())
            {
                st.pop();
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
