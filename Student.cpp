#include <iostream>

using namespace std;

struct sinhVien(){
	char Ms[10];
	char T[50];
	int Age ;
	double diem;
}

int main()
{
	// w :write ,r :read 
	//freopen("sinhvien.txt","a",stdout);
	//cout << "hello\ni am iron man \n";
	//cout << "hello";


	return 0;
}

void nhap(sinhVien &sv){
	cin.getline(sv.Ms,10,"\n");
	cin >> sv.Age;
	cin >> sv.diem;
	cin.getline(sv.T,50,"\n");
}