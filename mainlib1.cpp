#include <iostream>
#include "lib1.h"

/*
g++ -std=c++17 -Wall -Werror -Wextra -c lib1.cpp -o lib1.o
ar rcs lib1.lib lib1.o
create the header file that contain the signature of all functions in the library
g++ -std=c++17 -Wall -Werror -Wextra  mainlib1.cpp -o mainlib1 -L . -llib1 && mainlib1.exe
*/
int main(){
	std::cout << add(4, 5)<<std::endl;
	return  0;
}