#include <iostream>
using namespace std;

void importA(int* &A,int &n);
void import(int &x);
int BynarySeach(int *A, int &L,int &R,int x, int &step);

int main()
{
	int n;
	int *A;
	int L=0;
	int x;
	int step =0;

	importA(A,n);
	int R =n;
	import(x);
	
	int result =BynarySeach(A,L,R,x,step);
	cout <<"Finding ... ";
	cout <<result;
	return 0;
}

int BynarySeach(int *A, int &L,int &R,int x, int &step)
{
	step++;
	cout <<step;
	int mid =(R-L)/2 ;
	if(R >=L){
		if(A[mid] >x){
			R =mid-1;
			return BynarySeach(A, L, R,x,step);
		}else if(A[mid] ==x){
			return x;
		}else{
			L =mid -1;
			return BynarySeach(A, L, R, x,step);
		}
	}
	return -1;
}
void import(int &x)
{
	cout <<"enter number you want find: ";
	cin >>x;
}

void importA(int* &A,int &n)
{
	cout <<"Enter Size of Array: ";
	cin >>n;
	A =new int[n];
	for(int i=0; i<n;i++){
		cin >>A[i];
	}
}