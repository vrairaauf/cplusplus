#include <iostream>
#include <string>
#include "Mobile.h"

int main()
{
	Mobile m1("nokia", 95190089);
	std::cout << "marque : " << m1.getMarque() << std::endl << "number :" << m1.getNumber() << std::endl;
	
	Mobile *m2=new Mobile("samsung", 51628529);
	//m2->setMarque("nokia");
	std::cout << "marque : " << m2->getMarque() << std::endl << "number :" << m2->getNumber() << std::endl;
	
	int age;
	while(!std::cin>>age){
		std::cout << "enter your age : " << std::endl;
	}
	std::cout<< "age is : " << age << std::endl;
	return 0;
}