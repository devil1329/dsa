#include<iostream>
#include<cmath>
using namespace std;

int checkPrime(int n)
{
	int flag=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			flag=1;
	}
	if(flag==1)
	{
		n=checkPrime(n+1);
	}
	return n;
}

void prime(int n)
{
	static int i=2;
	if(n==0) return;
	i=checkPrime(i);
	cout<<i<<" ";
	i++;
	prime(n-1);
}

int main()
{
	int n=10;
	prime(n);
}
