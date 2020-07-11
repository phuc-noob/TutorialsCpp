#include <iostream>
#define Size 100
using namespace std;

void nhap(int& m);
void xuat(int m);
void taoMang(int A[][Size], int m, int n);
void xuatMang(int A[][Size], int m, int n);
void xuatDoupleArray(int A[Size], int B[Size], int x);
void nhapDoupleArray(int A[Size], int B[Size], int x);
int demCamera(int A[][Size], int C[Size], int D[Size], int x);

int main()
{
	int A[Size][Size] = { 0 };
	int m, n, x;
	nhap(m);
	nhap(n);	
	nhap(x);
	int C[Size], D[Size];
	nhapDoupleArray(C, D, x);
	taoMang(A, m, n);
	xuatMang(A, m, n);
	xuatDoupleArray(C, D, x);
	int result = demCamera(A, C, D, x);
	xuatMang(A, m, n);
	xuat(result);
	return 0;
}

int demCamera(int A[][Size], int C[Size], int D[Size], int x)
{
	int dem = 0;
	int E[13] = {-2, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 2};
	int F[13] = { 0, -1, 0, 1, -2, -1, 0, 1, 2, -1, 0, 1, 0 };
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < 13; j++) {
			if (A[C[i] + E[j] + 2][D[i] + F[j] + 2] == 1) {
				dem++;
				A[C[i] + E[j] + 2][D[i] + F[j] + 2] = 0;
			}
		}
	}
	return dem;
}

void nhapDoupleArray(int A[Size], int B[Size], int x)
{
	for (int i = 0; i < x; i++) {
		cin >> A[i];
		cin >> B[i];
	}
}

void xuatDoupleArray(int A[Size], int B[Size], int x)
{
	for (int i = 0; i < x; i++) {
		cout << A[i] << " " << B[i] << "\n";
	}
}

void xuatMang(int A[][Size], int m, int n)
{
	for (int i = 0; i < m + 4; i++) {
		for (int j = 0; j < n + 4; j++) {
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}

void taoMang(int A[][Size], int m, int n)
{
	for (int i = 2; i < m + 2; i++) {
		for (int j = 2; j < n + 2; j++) {
			A[i][j] = 1;
		}
	}
}

void xuat(int m)
{
	cout << m;
}

void nhap(int& m)
{
	cin >> m;
}