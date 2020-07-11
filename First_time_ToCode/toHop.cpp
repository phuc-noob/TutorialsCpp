#include <iostream>
#define Size 100

using namespace std;
void nhap(int A[], int &n);
void xuat(int A[], int n);
void hoanDoi(int A[], int i,int j);
void daoMang(int A[] ,int i ,int n);
void toHop(int A[] ,int n);

int main()
{
	int A[Size],n;
	nhap(A,n);
	toHop(A ,n);
	return 0;
}

void daoMang(int A[] ,int i ,int n)
{
	int t =(n-i)/2;
	for(int k =0; k <=t; k++){
		hoanDoi(A ,i+k ,n-1-k);
	}
}

void hoanDoi(int A[], int i,int j)
{
	int tam =0;
	tam =A[i];
	A[i] =A[j];
	A[j] =tam;
}

void toHop(int A[] ,int n)
{
	xuat(A ,n);
	for(int i=n-2 ; i>=0; i--){
		while(A[i] <A[i+1]){
			for(int j =n-1; j >i; j--){
				while(A[j] >A[i]){
					hoanDoi(A ,i ,j);
					daoMang(A ,i+1 ,n);
					xuat(A ,n);
					i = n-2;
				}
			}
		}
	}
}

void xuat(int A[], int n)
{
	for(int i=0 ;i <n; i++){
		cout << A[i];
	}
	cout <<"\n";
}

void nhap(int A[], int &n)
{
	cin >> n;
	for(int i=0; i <n; i++){
		A[i] =i;
	}
}