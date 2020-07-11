#include <iostream>

using namespace std;

struct phanSo
{
	int tuSo;
	int mauSo;
};

void nhapPs(phanSo &a);
void xuatPs(phanSo a);
phanSo tinhTong(phanSo a,phanSo b);
void rutGon (phanSo &kq);
int Uc(phanSo a);

int main()
{
	phanSo a,b;
	nhapPs(a);
	nhapPs(b);
	phanSo kq =tinhTong(a,b);
	rutGon(kq);
	xuatPs(kq);
	return 0;
}

phanSo tinhTong(phanSo a,phanSo b)
{
	phanSo kq;
	kq.tuSo =a.tuSo*b.mauSo +a.mauSo*b.tuSo;
	kq.mauSo =a.mauSo*b.mauSo;
	return kq;
}

void rutGon (phanSo &kq)
{
	int uc =Uc(kq);
	kq.mauSo =kq.mauSo/uc;
	kq.tuSo =kq.tuSo/uc;
}

int Uc(phanSo a)
{
	while(a.mauSo != a.tuSo){
		if(a.mauSo > a.tuSo){
			a.mauSo =a.mauSo -a.tuSo;
		}else{
			a.tuSo =a.tuSo -a.mauSo;
		}
	}
	return a.mauSo;
}

void nhapPs(phanSo &a)
{
	cin >> a.tuSo>>a.mauSo ;
}

void xuatPs(phanSo a)
{
	cout << a.tuSo <<" " <<a.mauSo;
}