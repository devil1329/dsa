/*
    1
   321
  54321
 7654321
987654321
*/


#include<iostream>
using namespace std;

int main()
{
    int n=5;
    // cin>>n;
    int i,j,temp=1;
    for(i=0;i<n;i++)
    {
        for(j=n-i-1;j>0;j--)
            cout<<" ";
        int k=temp;
        for(j=0;k>0;j++)
        {
            cout<<k;
            k--;
        }
        temp+=2;
        cout<<endl;
    }
    return 0;
}
