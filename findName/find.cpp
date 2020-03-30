#include <iostream>
#include <string>

std::string GetNameFromUser();

int main()
{
	std::string ListName[]{ "peter", "hero", "david" };
	std::string GetName{ GetNameFromUser() };

	bool found{ false };
	for (auto &element : ListName) {
		if (element == GetName){
			found = true;
			break;
		}
	}

	if (found == true) {
		std::cout << GetName << " was found.";
	}
	else {
		std::cout << GetName << " was not found.";
	}
	return 0;
}

std::string GetNameFromUser() {
	std::string name;
	std::cout << "Enter a name :";
	std::cin >> name;
	return name;
}