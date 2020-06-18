#include <iostream>
#define SIZE 100

using namespace std;

void nhap(int &n);
void xuat(int A[], int n);
void chuyen(int A[], int n, int i);
void sinhNhiPhan(int n);

int main()
{
	int n;
	nhap(n);
	sinhNhiPhan(n);
	cout << "\t\t\t\t" << "Nasa tuoi LOL ..." << "\n";
	return 0;
}

void chuyen(int A[], int n, int i)
{
	for(int j=i+1; j <n;j++){
		A[j] =0;
	}
}

void sinhNhiPhan(int n)
{
	int A[SIZE] ={0};
	xuat(A,n);
	for(int i =n-1; i >=0; i--){
		while(A[i] ==0){
			A[i] =1;
			chuyen(A, n, i);
			i=n-1;
			xuat(A,n);
		}
	}
}

void nhap(int &n)
{
	cin >> n ;
}

void xuat(int A[], int n)
{
	cout << "\t" ;
	for(int i =0; i<n; i++){
		cout << A[i] ;
	}
	cout << "\n";
}