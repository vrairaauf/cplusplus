#include <iostream>
#include <string>
/*
variable in c++:
	type name;
	type name{} : default value
	type name{initialisation};
if i declare a variable and not using in program , compiler handle unused variable exception

suffixe:(after the variable definition float f1{12.1f} )
	f, F (float)
	u, U(unsigned)
	l, L(long int , long double)
	ll, LL(long long int)

prefixe :(before the variable deifnition int file_rights = 0b1010)
	0x:haxdecimal
	0 :octal
	0b;binary

some trick to declare a variable
	long long bigNumber = 10'123'563'894;(declaration more pretty)

unused-parametre it's an exception that handled when i declare an argument and i don't using in function

there are three standart output in c++
	1-standard output std::cout (using tampon)
	2-error standard output std::cerr (unusing tampon)
	3-log standard output std::clog (using tampon)

*/
int sum(int a, int b);
int main(){
	//bool is_secure{};
	//long long bigNumber = 10'123'563'894;
	//declare a char variable
	//char c1{'a'};
	//declare a string variable
	std::string message{"hello world!"}, msg{"coucou"};
	//float f1{12.3};
	//std::cout << message << msg << std::endl;
	//message+=" hello again!";

	//std::cout << message << std::endl;
	//std::cout << sum(2,1);
	//using namespace std::literals;
	//auto str1{"hello raouf"s};//(to manipule str1 like std::string)
	//std::cout << str1 << std::endl;
	return 0;
}
/*----------------*/
int sum(int a, int b){
	return a+b;
}