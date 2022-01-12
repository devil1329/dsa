#include<iostream>
using namespace std;

void nat(int n)
{
	if(n==0) return;
	nat(n-1);
	cout<<n<<" ";
}

int main()
{
	int n=10;
	nat(n);
}
