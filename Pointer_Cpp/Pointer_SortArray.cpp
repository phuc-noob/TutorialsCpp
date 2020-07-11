#include <iostream>
#define Size 100

using namespace std;

void CreateFArray(float *A,int *n);
void Sort(float *A,int n);
void Swap(float &a,float &b);
void outArray(float *A,int n);

int main()
{
	int n=0;
	float A[Size];

	int *k;
	k =&n;
	//conect with address of poter
	//connect with name of nomal variable
	CreateFArray(A,k);
	Sort(A,n);
	outArray(A,n);
	return 0;
}

void outArray(float *A,int n)
{
	cout <<"\n";
	for(int i=0;i <n;i++){
		cout <<A[i];
	}
}

void Swap(float &a,float &b)
{
	float temp;
	temp =a;
	a =b;
	b =temp;
}

void Sort(float *A,int n)
{
	for(int i=0;i <n-1;i++){
		for(int j =i+1;j <n;j++){
			if(A[i] >A[j]){
				Swap(A[i],A[j]);
			}
		}
	}
}

void CreateFArray(float *A, int *n)
{
	cout <<"Enter Size of Array: ";
	cin >> *n;
	int i =0;
	while(i<*n){
		cin >> A[i];
		cout <<" ";
		i++;
	}
}