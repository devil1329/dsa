// 1 
// 1 2
// 3 5 8
// 13 21 34 55
// 89 144 233 377 610

#include<iostream>
using namespace std;

int main()
{
    int n=5;
    // cin>>n;
    int i,j,temp=1;
    int a=0,b=1;
    cout<<1<<endl;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) 
        {
            int c=a+b;
            cout<<c<<" ";
            a=b;b=c;
        }
        cout<<endl;
    }
    return 0;
}
