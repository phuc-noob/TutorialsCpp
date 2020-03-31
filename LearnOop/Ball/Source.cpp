#include <iostream>
#include <string>

class Ball
{
private:
	std::string m_color;
	double m_radius;

public:
	Ball(std::string color = "black", double radius = 10.0) {
		m_color = color;
		m_radius = radius;
	}

	void Print() {
		std::cout << "Ball is " << m_color << " and volume is " << (4* 3.14 * m_radius)/3 <<"\n";
	};
};

int main()
{
	Ball red{"red",10.9};
	red.Print();

	Ball def{};
	def.Print();

	Ball blue{ "blue" };
	blue.Print();

	/*Ball twenty{ 20.0 };
	twenty.Print();*/

	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.Print();
}