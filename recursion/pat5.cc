/*
1 + 2^2 + 3^3 + 4^4 + 5^5 + 6^6 + 7^7 + 8^8 + 9^9 + 10^10
*/

#include<iostream>
#include<cmath>
using namespace std;

void pat(int n)
{
	static int i=2;
	if(n==0) return;
	cout<<" + "<<i<<"^"<<i;
	i++;
	pat(n-1);
}

int main()
{
	int n=10;
	cout<<"1";
	pat(n-1);
}
