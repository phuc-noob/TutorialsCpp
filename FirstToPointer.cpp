#include <iostream>
using namespace std;

int main()
{
	int a =5;
	int *px ;
	
	px =&a;
	cout << "Value of Px =" << *px <<"\n";
	*px +=10;
	
	cout << "Value of Px =" << *px <<"\n";
	cout << "a = " << a <<"\n";

	return 0;
}