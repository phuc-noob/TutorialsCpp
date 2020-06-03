#include <iostream>
#include <cassert>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// Default constructor
	Fraction(int numerator = 0, int denominator = 1)
	{
		assert(denominator != 0);
		m_numerator = numerator;
		m_denominator = denominator;
	}

	int GetNumer() { return m_numerator; }
	int GetDenomin() { return m_denominator; }
	double GetValue() { return static_cast<double> (m_numerator) / m_denominator; }
};

int main()
{
	Fraction Frac;
	std::cout << Frac.GetValue() <<'\n';

	Fraction six{ 69 };
	std::cout << six.GetValue()<< "\n";

	Fraction Zero{ 69, 0 };
	std::cout << Zero.GetValue();
	return 0;
}