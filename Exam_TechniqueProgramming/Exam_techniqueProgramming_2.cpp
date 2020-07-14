#include <iostream>
#define Size 100

using namespace std;

struct PhanSo {
	int tu;
	int mau;
};

void enter(PhanSo A[Size], int &n);
int compare(PhanSo A[Size], int n);

int main()
{
	PhanSo A[Size];
	int n;
	enter(A ,n);
	int result =compare(A ,n);
	cout << result;
	return 0;
}

int compare(PhanSo A[Size], int n)
{
	PhanSo max;
	int index =0;
	max.tu =A[0].tu;
	max.mau =A[0].mau;

	for(int i=1; i <n; i++){
		if(A[i].tu*max.mau >A[i].mau*max.tu){
			max.tu =A[i].tu;
			max.mau =A[i].mau;
			index =i;
		}
	}
	return index;
}

void enter(PhanSo A[Size], int &n)
{
	cin >> n;
	for(int i =0; i <n; i++){
		cin >>A[i].tu;
		cin >>A[i].mau;
	}
}