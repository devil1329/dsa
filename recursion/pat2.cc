/*
1 + 1/3 + 1/9 + 1/27 + 1/81 + 1/243 + 1/729 + 1/2187 + 1/6561 + 1/19683
*/

#include<iostream>
#include<cmath>
using namespace std;

void pat(int n)
{
	static int i=1;
	if(n==0) return;
	cout<<" + 1/"<<pow(3,i);
	i++;
	pat(n-1);
}

int main()
{
	int n=10;
	cout<<"1";
	pat(n-1);
}
