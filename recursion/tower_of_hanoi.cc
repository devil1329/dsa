#include<iostream>
using namespace std;

void toh(int n,char src,char dest,char aux)
{
	if(n==0) return;
	toh(n-1,src,aux,dest);
	cout<<"Move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
	toh(n-1,aux,dest,src);
}

int main()
{
	int n=4;
	toh(n,'a','b','c');
}
