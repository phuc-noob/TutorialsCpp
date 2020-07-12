#include <iostream>
using namespace std;

void import(int &n);
double factorial(int n);

int main()
{
	int n;

	import(n);
	double result =factorial(n);
	cout <<result;
	return 0;
}

double factorial(int n)
{
	
	if(n ==0)
		return 1;
	return n*factorial(n-1);
}

void import(int &n)
{
	cout <<"Enter a number: ";
	cin >>n;
}