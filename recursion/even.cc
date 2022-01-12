#include<iostream>
using namespace std;

void even(int n)
{
	static int i=0;
	if(n==0) return;
	cout<<i<<" ";
	i+=2;
	even(n-1);
}

int main()
{
	int n=10;
	even(n);
}
