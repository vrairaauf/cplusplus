#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

const int TVA=55;
int main()
{
	const int *p1=&TVA;
	int a=56;
	int *pa;
	pa=&a;
	int &refA=a;
	int **pointerToPointer=&pa;
	std::cout << "adress of TVA : " << p1 << std::endl << "value of TVA : "<<*p1<<std::endl;
	std::cout << "adress of a : " << pa << std::endl << "value of a : "<<*pa<<std::endl;
	std::cout << "ref of a : " << refA << std::endl << "value of a : "<<refA<<std::endl;
	std::cout << "adress of pa : " << pointerToPointer << std::endl << "value of pa : "<<**pointerToPointer<<std::endl;
	
	return 0;
}