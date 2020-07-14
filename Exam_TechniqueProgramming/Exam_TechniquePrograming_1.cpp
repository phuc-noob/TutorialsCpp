#include <iostream>
using namespace std;

int Sum(int n);
void enter(int &n);
double Cal(int n);

int main()
{
	int n;
	enter(n);
	double result =Cal(n);
	cout <<result;
	return 0;
}

double Cal(int n)
{
	if(n ==1)
		return 1;
	else if(n ==2)
		return 4;
	else
		return Cal(n-1) +Sum(n);
}

int Sum(int n)
{
	int turn =0;
	for(int i=0; i<=n;i++)
		turn +=i;
	return turn;
}

void enter(int &n)
{
	cin >> n;
}