#include<iostream>
using namespace std;

void fibo(int n,int a,int b,int &sum)
{
	static int i=1;
	if(i>n) return;
	i++;
	sum=sum+a+b;
	fibo(n,b,a+b,sum);
}

int main()
{
	int n=10;
	int sum=1;
	fibo(n-2,0,1,sum);
	cout<<sum;
}
