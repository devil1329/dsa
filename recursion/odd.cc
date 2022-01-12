#include<iostream>
using namespace std;

void odd(int n)
{
	static int i=1;
	if(n==0) return;
	cout<<i<<" ";
	i+=2;
	odd(n-1);
}

int main()
{
	int n=10;
	odd(n);
}
