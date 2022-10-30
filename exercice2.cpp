#include <iostream>

int main()
{
	int age;
	std::cout << "age ? "<<std::endl;
	while(!(std::cin >> age))
	{
		std::cout<<"age ?"<<std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}
	std::cout << "age : "<<age<<std::endl;
	return 0;
}