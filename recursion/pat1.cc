/*
1 + 1/2 + 1/4 + 1/8 + 1/16 + 1/32 + 1/64 + 1/128 + 1/256 + 1/512
*/

#include<iostream>
#include<cmath>
using namespace std;

void pat(int n)
{
	static int i=1;
	if(n==0) return;
	cout<<" + 1/"<<pow(2,i);
	i++;
	pat(n-1);
}

int main()
{
	int n=10;
	cout<<"1";
	pat(n-1);
}
