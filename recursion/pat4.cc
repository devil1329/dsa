/*
1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512
*/

#include<iostream>
#include<cmath>
using namespace std;

void pat(int n)
{
	static int i=1;
	if(n==0) return;
	cout<<" + "<<pow(2,i);
	i++;
	pat(n-1);
}

int main()
{
	int n=10;
	cout<<"1";
	pat(n-1);
}
