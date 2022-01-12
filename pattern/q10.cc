// 1   1
//  2 2 
//   3  
//  4 4 
// 5   5

#include<iostream>
using namespace std;

int main()
{
    int n=5;
    // cin>>n;
    int i,j,temp=1;
    for (int i = 1; i <= n; i++) {
  
        // Print characters of current row
        for (int j = 1; j <= n; j++) 
        {
            if (j == i || j == (n + 1 - i))
                cout << i; 
            else
                cout << " ";
        }
        cout<<endl;
    }
    return 0;
}
