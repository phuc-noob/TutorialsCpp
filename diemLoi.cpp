#include <iostream>
#define Size 100

using namespace std;

void xuatMang(int A[][Size],int m,int n);
void nhapMang(int A[][Size],int &m,int &n);
int laDiemLoi(int A[][Size],int i,int j);
int demDiemLoi(int A[][Size],int m,int n);
int min(int B[Size], int nB);
int timMinLoi(int A[][Size], int m, int n);
int ViTriDiemLoiMin(int A[][Size],int m,int n,int C[Size],int D[Size]);
int ViTriMin(int B[Size], int nB);
void xuat(int a);

int main()
{
	int A[Size][Size]={0},m,n;
	int C[Size],D[Size];
	nhapMang(A,m,n);

	cout <<"\n----------\n";
	xuatMang(A,m,n);

	cout <<"\n----------";
	int DemDiemLoi =demDiemLoi(A,m,n);
	xuat(DemDiemLoi);

	cout <<"\n----------";
	int Min =timMinLoi(A,m,n);
	xuat(Min);

	cout <<"\n----------";
	int viTriMin =ViTriDiemLoiMin(A, m, n, C, D);
	xuat(C[viTriMin] -1);
	xuat(D[viTriMin] -1);
	return 0;
}

int ViTriDiemLoiMin(int A[][Size],int m,int n,int C[Size],int D[Size])
{
	int B[100000],nB=0;
	for(int i=1; i <=m; i++){
		for(int j=1; j <=n; j++){
			if(laDiemLoi(A, i, j)){
				B[nB] =A[i][j];
				C[nB] =i;
				D[nB] =j;
				nB++;
			}
		}
	}
	int viTriMin =ViTriMin(B, nB);
	return viTriMin;
}

int ViTriMin(int B[Size], int nB)
{
	int viTri =0;
	int min =B[0];
	for(int i=0;i <nB; i++){
		if(min >B[i]){
			min =B[i];
			viTri =i;
		}
	}
	return viTri;
}

int min(int B[Size], int nB)
{
	int Min =B[0];
	for(int i=1; i<nB; i++){
		if(Min >B[i])
			Min =B[i];
	}
	return Min;
}

int timMinLoi(int A[][Size], int m, int n)
{
	int B[100000],nB =0;
	for(int i=1; i <=m; i++){
		for(int j =1;j <=n; j++){
			if(laDiemLoi(A,i,j)){
				B[nB] =A[i][j];
				nB++;
			}
		}
	}
	return min(B,nB);
}

int laDiemLoi(int A[][Size],int i,int j)
{
	int C[4] ={0,0,-1,1};
	int D[4] ={-1,1,0,0};
	for(int k=0;k <4; k++){
		if(A[i][j] <= A[i+C[k]][j+D[k]]){
			return 0;
		}
	}
	return 1;
}

int demDiemLoi(int A[][Size],int m,int n)
{
	int dem =0;		
	for(int i =1; i <=m; i++){
		for(int j=1; j <=n; j++){
			if(laDiemLoi(A,i,j)){
				dem++;
			}
		}
	}
	return dem;
}

void xuat(int a)
{
	cout << a <<" ";
}

void nhapMang(int A[][Size],int &m,int &n)
{
	cin >> m >> n;
	for(int i=1; i <=m; i++){
		for(int j=1; j <=n;j++){
			cin >>A[i][j];
		}
	}
}

void xuatMang(int A[][Size],int m,int n)
{
	cout << m <<" " << n << " " ;
	cout <<"\n";
	for(int i=0; i <=m+1; i++){
		for(int j=0; j <=n+1;j++){
			cout << A[i][j] <<" ";
		}
		cout <<"\n";
	}
}