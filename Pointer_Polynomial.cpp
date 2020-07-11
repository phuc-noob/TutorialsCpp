#include <iostream>
#define F1  59
#define F2  60
#define F3  61
#define F4  62
#define F5  63
#define F10 68
#define Size 100

using namespace std;

void init_Poly(float *A, int &n,char c);
void in_Poly(float *A, int n);
float cal_Poly(float *A,int n);
void total_Poly(float *A,int n,float *B, int m, float *C,int &k);

int main()
{
	float A[Size],B[Size],C[Size];
	int n, m, k;
	char a ='A',b ='B';
	init_Poly(A ,n ,a);
	init_Poly(B ,m ,b);
	float result =cal_Poly(A ,n);
	cout <<result;
	total_Poly(A,n,B,m,C,k);
	in_Poly(A,n);
	in_Poly(B,m);
	in_Poly(C,k);
	return 0;
}

float cal_Poly(float *A,int n)
{
	float k;
	float s=0;
	float Result =0;
	cout <<"Enter number want calculate : ";
	cin >> k;

	for(int i=n; i>0;i--){
		int j =i;
		s=k;
		while(j>1){
			s *=k;
			j--;
		}
		Result +=(s*A[i]);
		s =0;
	}
	return Result+A[0];
}

void total_Poly(float *A,int n,float *B, int m, float *C, int &k)
{
	if(m >n){
		k =m;
		for(int i=0;i<=n ;i++){
			C[i] =B[i] +A[i];
		}
		for(int j=i;j <=m;j++){
			C[j] =B[j];
		}
	}
	if(m <n){
		k=n;
		for(int i=0;i<=m ;i++){
			C[i] =B[i] +A[i];
		}
		for(int j=i;j <=n;j++){
			C[j] =A[j];
		}
	}
}

void init_Poly(float *A, int &n,char c)
{
	float t;
	cout <<"Enter degree of polynomial : ";
	cin >> n;
	for(int i=0;i <=n;i++){
		cout << c<<i <<" ";
		cin >> t;
		A[i] =t;
	}
}

void in_Poly(float *A, int n)
{
	for(int i=0;i <=n;i++){
		cout <<A[i] <<"x"<<"^"<<i ;
		if(A[i] <0)
			cout << "-";
		else
			if(i<n)
				cout <<"+";
				
	}
}