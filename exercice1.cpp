#include <iostream>
#include <string>
int main()
{
	int age{23} ;
	std::string username{"raouf abidi "};
/*
	while(verif==1)
	{
		std::cout << "age : ";
		std::cin >> age;
		if(std::cin.good()==1)
			break;
		std::cout <<std::endl << "bad request "<<std::endl;

		//std::getline(std::cin, username);
		//std::getline(std::cin, username);
	}
*/
	for(auto letter : username){
		std::cout << letter << std::endl;
	}
	std::cout << "age is  : " << age << std::endl << "username : " << username << std::endl;
	return 0;
}