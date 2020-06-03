#include <iostream>

using namespace std;

void nhap(int &n,int &m,int A[][100]);
void xuatMang(int n,int m,int A[][100]);
void xuat(int a);
int max(int a,int b);
int RobotCost(int n,int m,int A[100][100]);

int main()
{
	int n ,m ,A[100][100]= {0};	
	nhap(n,m,A);
	xuatMang(n,m,A);
	int result =RobotCost(n,m,A);
	xuat(result);
	return 0;
}

int max(int a,int b)
{
	if(a >b)
		return a;
	else 
		return b;
}

int RobotCost(int n,int m,int A[100][100])
{
	int F[100][100] ={0};
	for(int i=0;i <n;i++)
		for(int j=0;j <m;j++)
		{
			if(i >0)
				F[i][j] =max(F[i][j],F[i-1][j]+A[i][j]);
			if(j >0)
				F[i][j] =max(F[i][j],F[i][j-1] +A[i][j]);
		}
	return F[n-1][m-1];
}

void nhap(int &n,int &m,int A[][100])
{
	cin >>n >>m;
	for(int i =0;i <n;i++)
		for(int j =0;j <m;j++)
			cin >>A[i][j];
}

void xuatMang(int n,int m,int A[][100])
{
	for(int i=0;i <n;i++){
		for(int j=0;j <m;j++){
			cout <<A[i][j] <<" ";
		}
		cout <<"\n";
	}
}
void xuat(int a)
{
	cout <<a;
}