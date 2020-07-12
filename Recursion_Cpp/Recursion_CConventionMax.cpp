#include <iostream>
using namespace std;

void import(int &a);
int convention(int a, int b);

int main()
{
	int a,b;
	import(a);
	import(b);

	int result =convention(a,b);
	cout <<result;
	return 0;
}

int convention(int a, int b)
{
	if(a ==0)
		return b;
	return convention(b %a, a);
}

void import(int &a)
{
	cout <<"Enter a number : ";
	cin >> a;
}
