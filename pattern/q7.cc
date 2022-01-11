/*
5
54
543
5432
54321
543210
54321
5432
543
54
5
*/

#include<iostream>
using namespace std;

int main()
{
    int n=5;
    // cin>>n;
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=n;j>n-i-1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=n;j>n-i-1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
