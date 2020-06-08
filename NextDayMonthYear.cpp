#include <iostream>

using namespace std;

int laNamNhuan(int Y);
int hopLe(int D,int M,int Y);
void nextDay(int &D,int &M,int &Y);
void nhap(int &d);
void xuat(int d);

int Date[13] ={31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int D,M,Y;
	nhap(D);
	nhap(M);
	nhap(Y);
	nextDay(D,M,Y);
	xuat(D);
	xuat(M);
	xuat(Y);
	return 0;
}

int laNamNhuan(int Y)
{
	if((Y%4==0 &&Y%100!=0) ||Y%400==0)
		return 1;
	else
		return 0;
}

int hopLe(int D,int M,int Y)
{
	if(laNamNhuan(Y))
		Date[2]++;
	if(Y < 0 || M <= 0 || M > 12 || D <= 0 ||D >Date[M]){
		return 0;
	}else{
		return 1;
	}
}

void nextDay(int &D,int &M,int &Y)
{
	if(hopLe(D,M,Y)){
		if(D<Date[M])
			D++;
		else if(M <12){
			D=1;
			M++;
		}else{
			D=1;
			M=1;
			Y++;
		}
	}else{
		D =0;
		M =0;
		Y =0;
		cout <<"Ngay Thang Nam khong hop le.";
	}
}

void nhap(int &d)
{
	cin >>d;
}

void xuat(int d)
{
	cout <<d<<" ";
}