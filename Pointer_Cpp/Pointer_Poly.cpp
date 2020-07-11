#include <iostream>

#define Size 100

using namespace std;

void init_Poly(float* A, int& n, char c);
void in_Poly(float* A, int n,char c);
float cal_Poly(float* A, int n);
void total_Poly(float* A, int n, float* B, int m, float* C, int& k);
void sub_Poly(float* A, int n, float* B, int m, float* C, int& k);
void exercuse(float* A, int n, char a, float* B, int m, char b, float* C, int k, char c);

int main()
{
	float A[Size], B[Size], C[Size];
	int n, m, k;
	char a = 'A', b = 'B', c = 'C';
	exercuse(A, n, a, B, m, b, C, k, c);
	return 0;
}

void exercuse(float* A, int n,char a, float* B, int m,char b, float* C, int k, char c)
{
	k =0 ;
	int key;
	int control = 0;
	cout << "exercuse with poly " << "\n";
	cout << "1 - do create poly " << "\n";
	cout << "2 - Calculate TOTAL with poly " << "\n";
	cout << "3 - Calculate SUB with poly" << "\n";
	cout << "4 - Calculate VALUE of Poly" << "\n";
	cout << "10 - exit." << "\n";

	cout << "Enter key What want to do ... ";
	cin >> key ;
	 while (key != 10){

		switch (key) {
		case 1 :
			control = 1;
			init_Poly(A, n, a);
			init_Poly(B, m, b);
			cout <<"Enter key what you want to do next ...";
			cin >> key ;break;
			cout << "fuck if not break";
		case 2 :
			if (control) {
				total_Poly(A, n, B, m, C, k);
				in_Poly(A, n, a);
				in_Poly(B, m, b);
				in_Poly(C, k, c);
				cout <<"Enter key what you want to do next ...";
				cin >> key ;
			}else{
				cout << "To do the fisrt Step, Please! ";
				cin >> key ;
				break;
			}
			break;
		case 3 :
			if (control) {
				sub_Poly(A, n, B, m, C, k);
				in_Poly(A, n, a);
				in_Poly(B, m, b);
				in_Poly(C, k, c);
			}else{
				cout << "To do the fisrt Step, Please! ";
				cin >> key ;
				break;
			}
			cout <<"Enter key what you want to do next ...";
			cin >> key ;
			break;
		case 4 :
			if (control) {
				in_Poly(A, n, a);
				float resultA = cal_Poly(A, n);
				cout << resultA << "\n";

				in_Poly(B, m, b);
				float resultB = cal_Poly(B, m);
				cout << resultB << "\n";
				
				if(k){
					in_Poly(C, k, c);
					float resultC = cal_Poly(C, k);
					cout << resultC << "\n";
				}
			}else{
				cout << "To do the fisrt Step, Please! ";
				cin >> key ;
				break;
			}
			cout <<"Enter key what you want to do next ...";
			cin >> key ;
			break;
		default :
			cout << "What the FUCKER What do you want! ";
			cin >> key ;
			break;
		}
		
	}
	if (key == 10) {
		cout << "Exit Exercute!" << "\n";
	}
}

void sub_Poly(float* A, int n, float* B, int m, float* C, int& k)
{
	if (m > n) {
		k = m;
		int t = 0;
		for (int i = 0; i <= n+1; i++) {
			C[i] = B[i] - A[i];
			t = i;
		}
		for (int j = t; j <= m+1; j++) {
			C[j] = B[j];
		}
	}
	if (m <= n) {
		k = n;
		int t = 0;
		for (int i = 0; i <= m+1; i++) {
			C[i] = A[i] - B[i];
			t = i;
		}
		for (int j = t; j <= n+1; j++) {
			C[j] = A[j];
		}
	}
}

float cal_Poly(float* A, int n)
{
	float k;
	float s = 0;
	float Result = 0;
	cout << "Enter number want calculate : ";
	cin >> k;

	for (int i = n; i > 0; i--) {
		int j = i;
		s = k;
		while (j > 1) {
			s *= k;
			j--;
		}
		Result += (s * A[i]);
		s = 0;
	}
	return Result + A[0];
}

void total_Poly(float* A, int n, float* B, int m, float* C, int& k)
{
	if (m > n) {
		k = m;
		int t = 0;
		for (int i = 0; i <= n+1; i++) {
			C[i] = B[i] + A[i];
			t = i;
		}
		for (int j = t; j <= m+1; j++) {
			C[j] = B[j];
		}
	}
	if (m <= n) {
		k = n;
		int t = 0;
		for (int i = 0; i <= m+1; i++) {
			C[i] = B[i] + A[i];
			t = i;
		}
		for (int j = t; j <= n+1; j++) {
			C[j] = A[j];
		}
	}
}

void init_Poly(float* A, int& n, char c)
{
	float t;
	cout << "Enter degree of polynomial : ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cout << c << i << " ";
		cin >> t;
		A[i] = t;
	}
}

void in_Poly(float* A, int n,char c)
{
	cout <<"Poly_" <<c <<" :";
	for (int i = 0; i <= n; i++) {
		cout << A[i] << "x" << "^" << i;
		if (i < n) {
			if (A[i+1] >= 0)
				cout << "+";
		}
		/*else
			if (i < n)
				cout << "+";*/
	}
	cout << "\n";
}