#include <iostream>
#include <string.h>
using namespace std;

void nhapMang(char A[100]);
void Find(char A[100],char B[100]);
int max(int a,int b);

int main()
{
	char A[100],B[100];
	nhapMang(A);
	nhapMang(B);

	cout <<"start...";
	Find(A,B);
	cout <<" last ";
	return 0;
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

void Find(char A[100],char B[100])
{
	int n =strlen(A);
	int m =strlen(B);
	int L[100][100]={0};

	for(int i=0;i <n; i++) L[i][0] =0;
	for(int j=0;i <m; j++) L[0][j] =0;
	for(int k=1; k <=n; k++){
		for(int c=1; c <=m;c++){
			if(A[k-1] ==B[c-1]){
				L[k][c] =L[k-1][c-1]+1;
			}else{
				L[k][c] =max(L[k-1][c],L[k][c-1]);
			}
		}
	}
	for(int z=0; z<=n; z++){
		for(int o=0; o <=m;o++){
			cout <<L[z][o];
		}
		cout <<"\n";
	}

	while(m >0 && n>0){
		if( A[n-1] ==B[m-1] && L[n][m]-1 ==L[n-1][m-1] ){
			cout << A[n];
			n--;
			m--;
		}else{
			if(L[n-1][m] >L[n][m-1])
				n--;
			else
				m--;
		}
	}
	
	/*for(int f=n; f>0;f--){
		for(int t=m; t>0;t--){
			if(A[f-1] ==B[t-1] && L[f][t]-1 ==L[f-1][t-1]){
				cout <<A[f-1];
			}
		}
		m -=1;
	}*/
}

void nhapMang(char A[100])
{
	cin.getline(A, 100);
}