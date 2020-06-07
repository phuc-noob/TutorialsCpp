#include <iostream>
#include <string.h>

using namespace std;

void tinhTong(char A[], char B[], char C[]);
void chuanHoa(char A[], char B[]);
void tinhHieu(char A[], char B[], char D[]);
void tinhTruSoLonChoSoNho(char A[], char B[], char D[]);
void rutGon(char D[]);
#define Size 100

int main()
{
	char A[Size], B[Size], C[Size], D[Size];
	gets_s(A);
	gets_s(B);
	chuanHoa(A, B);
	tinhTong(A, B, C);
	tinhHieu(A, B, D);
	puts(C);
	puts(D);
	return 0;
}

void rutGon(char D[])
{
	_strrev(D);
	int l = strlen(D);
	for (int i = 1; i < l; i++) {
		if (D[i] == '0') {
			D[i] = '\0';
			break;
		}
	}
	_strrev(D);
}

void tinhHieu(char A[], char B[], char D[]) {
	if (strcmp(A, B) > 0) {
		tinhTruSoLonChoSoNho(A, B, D);
		rutGon(D);
	}
	else {
		tinhTruSoLonChoSoNho(B, A, D);
		rutGon(D);
		int l = strlen(D);
		_strrev(D);
		D[l] = '-';
		D[l + 1] = '\0';
		_strrev(D);
	}
}

void tinhTruSoLonChoSoNho(char A[], char B[], char D[]) 
{
	int l = strlen(A);
	_strrev(A);
	_strrev(B);
	int nho = 0;
	for (int i = 0; i < l; i++) {
		int t = (A[i] - '0') - (B[i] - '0') - nho;
		
		if (t < 0) {
			D[i] = t + 10 + '0';
			nho = 1;
		}
		else {
			D[i] = t + '0';
			nho = 0;
		}
	}
	D[l] = '\0';
	_strrev(A);
	_strrev(B);
	_strrev(D);
}

void chen(char A[], int k)
{
	_strrev(A);
	int l = strlen(A);
	for (int i = 0; i < k; i++) {
		A[l + i] = '0';
	}
	A[l + k] = '\0';
	_strrev(A);
}

void chuanHoa(char A[], char B[])
{
	int l1 = strlen(A);
	int l2 = strlen(B);
	if (l1 > l2) {
		chen(B, l1 - l2);
	}
	else if (l1 < l2) {
		chen(A, l2 - l1);
	}
}

void tinhTong(char A[],char B[],char C[])
{
	_strrev(A);
	_strrev(B);
	int l = strlen(A);
	int nho = 0;
	for (int i = 0; i < l; i++) {
		int t = (A[i] - '0') + (B[i] - '0') + nho;
		C[i] = t % 10 +'0';
		nho = t / 10;
		/*
		if (t > 10) {
			C[i] = t - 10 + '0';
			nho = 1;
		}
		else {
			C[i] = t + '0';
			nho = 0;
		}
		*/
	}
	if (nho == 1) {
		C[l] = '1';
		C[l + 1] = '\0';
	}
	else {
		C[l] = '\0';
	}
	_strrev(A);
	_strrev(B);
	_strrev(C);
}