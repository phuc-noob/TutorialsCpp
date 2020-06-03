#include <iostream>

class DateClass
{
private:
	int m_day;
	int m_month;
	int m_year;

public:
	void setDate(int day, int month, int year) {
		m_day = day;
		m_month = month;
		m_year = year;
	}

	void print() {
		std::cout << m_month << '/' << m_day << '/' << m_year << '.' <<"\n";
	}

	// Note the addition of this function
	void copyFrom(const DateClass& d)
	{
		// Note that we can access the private members of d directly
		m_month = d.m_month;
		m_day = d.m_day;
		m_year = d.m_year;
	}
};

int main()
{
	DateClass date;
	date.setDate(10, 69, 2020);
	date.print();

	DateClass copy;
	copy.copyFrom(date); // okay, because copyFrom() is public
	copy.print();
	return 0;
}