#include <iostream>
int main(){
	try{
		std::pair<int, std::string> p(1, "raouf abidi");
		std::cout << "first value : " << p.first << std::endl << "second value : " << p.second << std::endl;
	}catch(...)
	{
		std::cout << "error " << std::endl;
	}
	return 0;
}