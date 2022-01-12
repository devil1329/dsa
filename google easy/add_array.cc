class Solution {
public:
    string addStrings(string nums1, string nums2) 
    {
        int n=nums1.length(),m=nums2.length();
        if(m>n)
        {
            swap(m,n);
            swap(nums1,nums2);
        }
        int i,j,c=0,flag=0;
        string s="";
        for(i=m-1,j=n-1;i>=0;i--,j--)
        {
            int n=(nums1[j]-48) + (nums2[i]-48) + c;
            if(n>9)
            {
                n=n-10;
                flag=1;
            }
            else
                flag=0;
            s+=(n+48);
            if(flag==1) c=1;
            else c=0;
        }
        for(;j>=0;j--)
        {
            int n=(nums1[j]-48) + c;
            if(n>9)
            {
                n=n-10;
                flag=1;
            }
            else
                flag=0;
            s+=(n+48);
            if(flag==1) c=1;
            else c=0;
        }
        if(c==1) s+= (c+48);
        reverse(s.begin(),s.end());
        return s;
    }
};
