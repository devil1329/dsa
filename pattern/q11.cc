
// 1     7
// 12   67
// 123 567
// 1234567
// 123 567
// 12   67
// 1     7

#include<iostream>
using namespace std;

int main()
{
    int n=7;
    // cin>>n;
    int i,j;
    int temp = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= temp || j >= n - temp + 1)
            {
                cout<<j;
            }
            else
            {
                cout<<" ";
            }
        }
        if (i <= n / 2)
            temp++;
        else
            temp--;
        cout<<endl;
        }
    return 0;
}
