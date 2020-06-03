// data structure help chung ta tu dinh nghia 
// du lieu cho ta su dung (kieu du lieu chua cac kieu DL khac)
// *Luu y: khi ben trong struc la kieu so thuc
// ta can nhap THONG QUA BIEN TRUNG GIAN
// CODE BT PHAN SO
// * nhap vao phan so 
// * xuat phan so
// * nhap vao 2 phan so
// * tinh tong 2 phan so
// * xuat tong ra console
// * rut gon 2 phan so
// * in ra phan so vua rut gon

#include <iostream>
using namespace std;

struct PhanSo {
	int Tuso;
	int MauSo;
};

void NhapPs(PhanSo &a);
void xuatPs(PhanSo a);
PhanSo TinhTong(PhanSo a,PhanSo b);
int Ucln(int a,int b);
void RutGon(PhanSo &c);

void main()
{
	PhanSo a,b,c;
	NhapPs(a);
	NhapPs(b);
	xuatPs(a);
	xuatPs(b);
	c =TinhTong(a,b);
	xuatPs(c);
	RutGon(c);
	xuatPs(c);
}

PhanSo TinhTong(PhanSo a,PhanSo b)
{
	PhanSo c;
	c.Tuso =a.Tuso*b.MauSo +b.Tuso*a.MauSo;
	c.MauSo =a.MauSo*b.MauSo;
	return c;
}

int Ucln(int a,int b)
{
	if(a==0 || b==0){
		return a+b;
	}
	while(a!=b){
		if(a >b)
			a -=b;
		else if(a <b)
			b -=a;
	}
	return a;
}

void RutGon(PhanSo &c)
{
	int Uc =Ucln(c.Tuso,c.MauSo);
	c.Tuso =c.Tuso/Uc;
	c.MauSo =c.MauSo/Uc;
}

void NhapPs(PhanSo &a)
{
	a.MauSo =0;
	cin >> a.Tuso;
	while (a.MauSo == 0){
		cin >> a.MauSo;
	}
}

void xuatPs(PhanSo a)
{
	printf("\n%d\n",a.Tuso);
	printf("-\n");
	printf("%d\n",a.MauSo);
}