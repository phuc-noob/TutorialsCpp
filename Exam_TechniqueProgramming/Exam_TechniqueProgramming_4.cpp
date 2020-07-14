#include <iostream>
#define Size 100

using namespace std;
void enter(int A[Size][Size], int &m, int &n);
int check(int A[][Size], int k, int i, int j);
int Find(int A[][Size] ,int m, int n);

int main()
{
	int m, n;
	int A[Size][Size] ={0};
	enter(A ,m ,n);
	int result =Find(A ,m ,n);
	cout << result;
	return 0;
}

int check(int A[][Size], int k, int i, int j)
{
	int C[8] ={-2 , -1, -2, -1, 2, 1, 2, 1};
	int D[8] ={-2 , -1, 2, 1, -2, -1, 2, 1};
	for(int z =0; z <8; z++){
		if(A[i+C[z]][j+D[z]] >=k)
			return 0;
	}
	return 1;
}

int Find(int A[][Size] ,int m, int n)
{
	int count =0;
	for(int i =2; i <m+2; i++){
		for(int j =2; j <n+2; j++){
			if(check(A ,A[i][j] , i, j))
				count++;
		}
	}
	return count;
}

void enter(int A[Size][Size], int &m, int &n)
{
	cin >>m >> n;
	for(int i =2; i <m+2; i++){
		for(int j =2; j <n+2; j++){
			cin >>A[i][j];
		}
	}
}