#include <iostream>
using namespace std;

double power(int a,int n);

int main()
{
	int a =5,b=2;
	double result =power(a, b);
	cout <<result;
	return 0;
}

double power(int a,int n)
{
	if(n ==0)
		return 1;
	return a*power(a ,n-1);
}