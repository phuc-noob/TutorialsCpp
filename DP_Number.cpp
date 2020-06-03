#include <iostream>

using namespace std;

void xuat(int n);
int LongNum(int n,int A[100]);
void nhapMang(int &n,int A[100]);
void xuatMang(int n,int A[100]);

int main()
{
	int n,A[100] ={0};
	nhapMang(n,A);
	xuatMang(n,A);
	int result =LongNum(n,A);
	xuat(result);
	return 0;
}

void nhapMang(int &n,int A[100])
{ 
	cin >> n;
	A[0] =-100000;
	for(int i=1;i <=n;i++)
	{
		cin >>A[i];
	}
	A[n+1] =100000;
}

void xuatMang(int n,int A[100])
{
	cout <<"\n";
	for(int i =0;i <=n+1;i++){
		cout<<A[i] <<" ";
	}
	cout <<"\n";
}

void xuat(int n)
{
	cout << n<<"\n";
}

int LongNum(int n,int A[100])
{
	int L[100] ={0};
	for(int i =0;i <=n+1;i++){
		L[i] =1;
		for(int j=0;j <i;j++){
			if(A[i] >A[j] && L[i] <L[j]+1){
				L[i] =L[j] +1;
			}
		}
	}
	return L[n+1]-2;
}
