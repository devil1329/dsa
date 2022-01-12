//  E       E
//   D     D
//    C   C
//     B B
//      A

#include<iostream>
using namespace std;

int main()
{
    int n=5;
    // cin>>n;
    int i,j,temp=1;
    for(i=0;i<n;i++)
    {
        temp+=2;
    }
    temp-=2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<" ";
        int k=temp;
        cout<<char(n-i-1+'A');
        for(j=0;k>2;j++)
        {
            cout<<" ";
            k--;
        }
        if(i!=n-1)
            cout<<char(n-i-1+'A');
        temp-=2;
        cout<<endl;
    }
    return 0;
}
