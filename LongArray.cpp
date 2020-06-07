#include <iostream>

using namespace std;
void nhapMang(int &n,int A[100]);
void FindMang(int n,int A[100],int B[100],int &o);
void xuatMang(int n,int A[100]);

int main()
{
	int n, A[100];
	int o=0;
	int B[100]= {0};
	nhapMang(n,A);
	FindMang(n,A,B,o);
	xuatMang(o,B);
	return 0;
}

void FindMang(int n,int A[100],int B[100],int &o)
{
	// Tim day L .
	int L[100] ={0};
	for(int i=0; i <=n+1;i++){
		L[i] =1;
		for(int j=0; j <i;j++){
			if(A[i] >A[j] && L[i] < L[j] +1){
				L[i] =L[j]+1;
			}
		}
	}

	// Tim day B
	for(int k=n+1; k >0;k--){
		for(int c=k-1;c >0;c--){
			if(L[k]-1 ==L[c] && A[k] >A[c]){
				k=c;
				B[o] =A[c];
				o ++;
			}
		}
	}
}

void xuatMang(int n,int A[100])
{
	for(int i=n-1;i >=0;i--){
		cout << A[i] <<" ";
	}
}

void nhapMang(int &n,int A[100])
{
	cin >>n;
	A[0] = -10000;
	for(int i=1; i <=n; i++){
		cin >>A[i];
	}
	A[n+1] =10000;
}

