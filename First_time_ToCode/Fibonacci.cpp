#include <iostream>

using namespace std;
int Fibonacci_Tapulation(int n);
void xuat(int n);
int Fibinacci_Memoization(int n);
void nhap(int &n);

int Fibonacci_Tapulation(int n)
{
	int F[100] ={0};
	F[0] =1;F[1] =1;
	for(int i=2; i <=n;i++){
		F[i] =F[i-1] +F[i-2];
	}
	return F[n];
}

int F[100] ={1,1};
int Fibinacci_Memoization(int n)		// Memory table :F[i] fibonacci number ith
{										// Top-down			
	// overlapping 
	// lenh if kiem tra va tranh lap lai fibonacci(n-2) overlapping
	if(F[n])							// De quy 	
	{
		return F[n];
	}
	// goi de quy n-1th and n-2th 
	F[n] =Fibinacci_Memoization(n-1) +Fibinacci_Memoization(n-2);
	return F[n];
}

void nhap(int &n)
{
	cout <<"Enter nth Fibonacci .";
	cin >> n;
}

void xuat(int n)
{
	cout <<n <<"\n";
}

int main()
{
	int n;
	do{
		nhap(n);
		int result =Fibonacci_Tapulation(n);
		int Result =Fibinacci_Memoization(n);
		xuat(Result);
		xuat(result);
	}while (n!= 0);
	return 0;
}