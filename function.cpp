/*#include <iostream>

int GetValueFromUser()
{
	std::cout <<"Enter an integer :";
	int num =0;
	std::cin >> num;
	return num;
}

void PrintDouble(int value)
{
	std::cout <<value <<" Double is: " <<value*2 <<"\n";
}

int main()
{
	int num =GetValueFromUser();
	PrintDouble(num); 
	return 0;
}
*/
#include <iostream>
using namespace std ;
int add(int x,int y);
int main()
{
    cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
 
int add(int x, int y)
{
    cin >> x >> y;
    return x + y;
}
