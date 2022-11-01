#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main()
{
	goto raouf;
	std::cout << "code ... " << std::endl;
	raouf:
	std::cout << "goto syntaxe " << std::endl;
	/*-----------*/
	int array1[8] = {1,2,3,4,5,6,7,8,};
	int *pointerToArray=array1;
	while(*pointerToArray){
		std::cout << *pointerToArray<< std::endl;
		pointerToArray++;
	}
	/*-------- two dimensional array -------*/
	int twoDimArr[2][4]={{1,2,3,4},{5,6,7,8}};

	int (*PointorToArr)[4]=twoDimArr;
	std::cout << "two dimensional array : " << PointorToArr<< std::endl << **PointorToArr <<std::endl;
	std::cout << "two dimensional array : " << PointorToArr+1<< std::endl << *(*PointorToArr+1) <<std::endl;
	
	std::cout << "two dimensional array : " << *(PointorToArr+1) <<std::endl<< std::endl << **(PointorToArr+1) <<std::endl;
	std::cout << "two dimensional array : " << *(PointorToArr+1)+1<< std::endl << *(*(PointorToArr+1)+1) <<std::endl;
	
	return 0;
}