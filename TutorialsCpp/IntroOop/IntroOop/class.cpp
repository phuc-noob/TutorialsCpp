#include <iostream>
#include <string>

class Employee {
public:
	std::string m_name;
	int m_id;
	double m_wage;

	// print infomation to console
	void print() {
		std::cout << "Name :" << m_name << '\t' << "Id :" << m_id << '\t' << "Wage :$ " << m_wage <<"\n";
	}
};

int main()
{
	//declare two employee 
	Employee alex{ "jonh alex ",1,1000 };
	Employee david{ "hero david",2,2000 };

	//use function in class
	alex.print();
	david.print();
	return 0;
}

//#include <iostream>
//using namespace std;
//
//struct DateStruct
//{
//	int year;
//	int month;
//	int day;
//};
//
//void print(const DateStruct &date)
//{
//	cout << date.year <<'/'<< date.month <<'/'<< date.day;
//}
//
//int main()
//{
//	DateStruct today{ 2020 , 03, 03 };
//	today.month = 07;
//	print(today);
//	return 0;
//}