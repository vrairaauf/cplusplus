#include <iostream>
#include <string>
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
	std::cin.clear();
	std::cin.ignore(100, '\n');
	std::string name;
	std::cout<<"enter your name : "<<std::endl;
	std::getline(std::cin, name);
	std::cout<<"name : "<<name<<std::endl << "age : "<<age<<std::endl;
	return 0;
}