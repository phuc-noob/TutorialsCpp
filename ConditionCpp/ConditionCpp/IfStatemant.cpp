// Checked a prime
#include <iostream>
using namespace std;
int GetNumberFromUser();
int CheckNumber(int num);

int main()
{
	int num{ GetNumberFromUser() };
	int check{ CheckNumber(num) };
	if (check == 0) {
		cout << "num is not prime";
	}
	else if (check == 1) {
		cout << "num is prime";
	}
}

int CheckNumber(int num)
{
	if (num <= 1) {
		return 0;
	}
	else {
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				return 0;
			}
			else {
				return 1;
			}
		}
	}
}

int GetNumberFromUser()
{
	int num{};
	cout << "Enter an integer:";
	cin >> num;
	return num;
}