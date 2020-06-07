#include <iostream>
#include <string.h>

using namespace std;

void tinhTong(char A[],char B[],char C[]);
void chuanHoa(char A[],char B[]);
void chen(char A[],int k);
void tinhTruSoLonChoSoNho(char A[],char B[],char D[]);
void tinhHieu(char A[],char B[],char D[]);

#define Size 100

void main()
{
	char A[Size], B[Size], C[Size], D[Size];
	gets(A);
	gets(B);
	chuanHoa(A,B);
	tinhTong(A,B,C);
	tinhHieu(A,B,D);
	puts(C);
	puts(D);
}

void tinhHieu(char A[],char B[],char D[])
{
	if(strcmp(A,B) >0){
		tinhTruSoLonChoSoNho(A,B,D);
	}else{
		tinhTruSoLonChoSoNho(B,A,D);
		strrev(D);
		int l =strlen(D);
		D[l] ='-';
		D[l+1] ='\0';
		strrev(D);
	}
}

void tinhTruSoLonChoSoNho(char A[],char B[],char D[])
{
	strrev(A);
	strrev(B);
	int l =strlen(A);

	int nho =0;
	for(int i=0; i <l; i++){
		int t =(A[i] -'0')-(B[i] -'0') - nho;
		if(t <0){
			D[i] =t +10+'0';
			nho =1;
		}else{
			D[i] =t +'0';
			nho =0;
		}
	}
	D[l] ='\0';
	strrev(D);
	strrev(A);
	strrev(B);
}

void chen(char A[],int k)
{
	int l =strlen(A);
	strrev(A);
	for(int i=0;i <k; i++){
		A[l+i] ='0';
	}
	A[l+i] ='\0';
	strrev(A);
}

void chuanHoa(char A[],char B[])
{
	int l1 =strlen(A);
	int l2 =strlen(B);
	if(l1 >l2){
		chen(B,l1-l2);
	}
	else{
		chen(A,l2-l1);
	}
}

void tinhTong(char A[],char B[],char C[])
{
	int l =strlen(A);
	
	strrev(A);
	strrev(B);
	
	int nho =0;
	for(int i=0;i <l;i++){
		int t =(A[i] -'0') +(B[i] -'0') + nho;
		C[i] =t%10 +'0';
		nho =t/10;

		// calculate clearly
		/*
		if(t <10){
			C[i] =t +'0';
			nho =0;
		}
		else{
			C[i] =t -10 +'0';
			nho =1;
		}*/
	}

	if(nho ==1){
		C[l] ='1';
		C[l+1] ='\0';
	}else{
		C[l] ='\0';
	}
	strrev(C);
	strrev(A);
	strrev(B);
}