#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	array<int, 5> MyArr{ 32, 45, 75, 69 };
	sort(MyArr.begin(), MyArr.end());

	// sort element small to large
	for (int& element : MyArr) {
		cout << element <<" ";
	 }

	cout <<"\n"<< "---------r sort---------" << "\n";

	// sort element large to small
	sort(MyArr.rbegin(), MyArr.rend());
	for (int& element : MyArr) {
		cout << element << " ";
	}
	return 0;
}