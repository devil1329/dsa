
//     1    
//    2 2
//   3   3
//  4     4
// 5       5
//  4     4
//   3   3
//    2 2
//     1


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
        cout<<i+1;
        for(j=0;k>2;j++)
        {
            cout<<" ";
            k--;
        }
        if(i!=0)
            cout<<i+1;
        temp+=2;
        cout<<endl;
    }
    temp-=4;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=i;j++)
            cout<<" ";
        int k=temp;
        cout<<n-i-1;
        for(j=0;k>2;j++)
        {
            cout<<" ";
            k--;
        }
        if(i!=n-2)
            cout<<n-i-1;
        temp-=2;
        cout<<endl;
    }
    return 0;
}
