#include <iostream>
#define Size 100

using namespace std;
void outMemoryOfArray(int A[]);
void outMultiDimentionalArray(int A[][5]);
void inputArray(int A[][Size], int &m,int &n);
void findMaxOfArray(int A[][Size],int m,int n,int B[2]);
void output(int A[][Size], int m,int n);
void inputFloatArray(float E[Size], int k);
void SortArray(float E[Size], int k);
void outputFloatArray(float E,int k);

int main()
{
	int A[10] ={1,2,3,4,5};
	int B[5][5];
	int C[Size][Size],int m,int n;
	int D[2]={0};
	int k;
	float E[Size];
	outMemoryOfArray(A);
	outMultiDimentionalArray(B);
	inputArray(C,m,n);
	findMaxOfArray(C, m, n,D);
	output(C,D[0],D[1]);
	inputFloatArray(E, k);
	SortArray(E,k);
	outputFloatArray(E,k)
	return 0;
}

// declare a float array and sort element of array
void outputFloatArray(float E,int k)
{
	cout <<"------------";
	for(int i=0; i<k;i++){
		cout <<E[i] <<" ";
	}
}
void SortArray(float E[Size], int k)
{
	int tam =0;
	for(int i=0; i<k-1;i++){
		for(j=i+1;j<k;j++){
			if(E[i] >E[j]){
				tam =E[j];
				E[j] =E[i];
				E[i] =tam;
		}
	}
}

void inputFloatArray(float E[Size], int k)
{
	cout <<"Enter lenght your array : ";
	cin >> k;
	for(int i=0;i <k;i++){
		cin >>E[i];
	}
}

void output(int A[][Size], int m,int n)
{
	cout << m <<" "<<n<<"\n";
	cout <<A[m][n];
}

void outMemoryOfArray(int A[])
{
	// size of array equa :10 *sizeof(type of array) 
	// first direction of Array is A 
	// and ith of direction Array is &A[i]
	cout <<"Directory of Array A: " <<A ;
	cout <<"\nSize of Array: " <<10*sizeof(int) <<"byte";
	for(int i=0;i <10; i++){
		cout <<"\n"<<i<<"Th direction " <<":"<<&A[i];
	}
	cout <<"\n";
}

void outMultiDimentionalArray(int A[][5])
{
	cout <<"Size of mutliDimentional Array: "<<5*5*sizeof(int)<<"\n";
	cout <<"First direction element of Array : " <<A<<"\n";
	for(int i=0; i <5;i ++){
		for(int j=0; j <5;j++){
			cout <<"A["<<i<<"]["<<j<<"]Th Direction : "<<&A[i][j]<<"\n";
		}
	}
	cout <<"\n";
}

// Declare an Array n element, find element max and direction
// of max element 
void inputArray(int A[][Size], int &m,int &n)
{
	cin >> m >> n;
	for(int i=0;i <m;i++){
		for(int j=0; j<n;j++){
			cin >>A[i][j];
		}
	}
}

void findMaxOfArray(int A[][Size],int m,int n,int B[2])
{
	int max =A[0][0];
	for(int i=0;i <m;i++){
		for(int j=0; j<n;j++){
			if(max <A[i][j]){
				max =A[i][j];
				B[0] =i;
				B[1] =j;
			}
		}
	}
}
