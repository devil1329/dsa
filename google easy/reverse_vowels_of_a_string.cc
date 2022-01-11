class Solution {
public:
    
    bool checkVowel(char c)
    {
        c=tolower(c);
        return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );
    }
    
    string reverseVowels(string s) 
    {
        int left=0,right=s.length()-1;
        while(left<right)
        {
            if(!checkVowel(s[left])) left++;
            if(!checkVowel(s[right])) right--;
            if(checkVowel(s[left]) && checkVowel(s[right]))
            {
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
