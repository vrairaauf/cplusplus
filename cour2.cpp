 #include <iostream>

/*
when i enter a value from clavier there are three thing possible:
	goodbit
	failbit
	badbit

	for exemple if i attend an integer value from clavier and the user enters a string value in this case c++ bad method was 1 and good method was 0

if i use std::cin with to read a string flux from cmd there are a problem the input termine in first blnac space
this is why we are use std::getline(std::cin, varName)

to solve the problem of read tampon use the flush fanctionalite with std::getline
*/
int main()
{
	//std::cout << "good : " << std::cin.good() << std::endl;
	//std::cout << "fail : " << std::cin.fail() << std::endl;
	//std::cout << "bad : " << std::cin.bad() << std::endl;
	//int number;
	

	//std::cout <<"enter  number : " ;
	//std::cin >> number ;
	//if(std::cin.fail()==1){
	//	std::cout << "fuck you " << std::endl;
	//	std::cin.clear();
	//}
	//std::cout << "good : " << std::cin.good() << std::endl;
	//std::cout << "fail : " << std::cin.fail() << std::endl;
	//std::cout << "bad : " << std::cin.bad() << std::endl;

	//std::cout <<"the number : "<< number << std::endl;
	int age;
	std::string username;
	std::cout << "age : ";
	std::cin >> age;
	std::getline(std::cin, username);

	std::cout << "username : ";
	
	std::getline(std::cin, username);
	std::cout << std::endl << "username : "<< username << std::endl << "age : " << age << std::endl;
	return 0;
}