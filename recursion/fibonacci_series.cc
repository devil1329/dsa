#include<iostream>
using namespace std;

void fibo(int n,int a,int b)
{
	static int i=1;
	if(i>n) return;
	i++;
	cout<<" "<<a+b;
	fibo(n,b,a+b);
}

int main()
{
	int n=10;
	cout<<0<<" "<<1;
	fibo(n-2,0,1);
}
