class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        string s;
        vector<string> res;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0) res.push_back("FizzBuzz");
            else if(i%3==0) res.push_back("Fizz");
            else if(i%5==0) res.push_back("Buzz");
            else
            {
                s="";
                int k=i;
                while(k>0)
                {
                    int rem=k%10;
                    s=char(rem+48) + s;
                    k/=10;
                }
                res.push_back(s);
            }
        }
        return res;
    }
};
