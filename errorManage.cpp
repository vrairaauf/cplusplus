#include<iostream>
#include <string>
#include "Exception.h"

int main(){
	int x;
	std::cout << "choose an integer : ";
	while(!(std::cin >> x)){
		std::cin.clear();
		std::cin.ignore(10, '\n');
		std::cout << "choose an integer : ";
	}
	try{
		if(x==0)
			throw Exception("NullVariable");
		else if(x>10)
			throw Exception("OutOfBoundedIndex");
	}catch(Exception ex){
		std::cout << "exception handled : "<< ex.getExceptionTitle();
	}
	return 0;
}