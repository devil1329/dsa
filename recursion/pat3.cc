/*
1 + 3 + 9 + 27 + 81 + 243 + 729 + 2187 + 6561 + 19683
*/

#include<iostream>
#include<cmath>
using namespace std;

void pat(int n)
{
	static int i=1;
	if(n==0) return;
	cout<<" + "<<pow(3,i);
	i++;
	pat(n-1);
}

int main()
{
	int n=10;
	cout<<"1";
	pat(n-1);
}
