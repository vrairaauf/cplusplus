#include <iostream>

namespace raouf{
	int add(int x, int y){
		return x+y;
	}
	/*-----------*/
	int increment(int x){
		return x+1;
	}
	/*------------*/
	int decrement(int x){
		if(x>0){
			return x-1;
		}
		return 0;
	}
}
int main(){
	std::cout << raouf::add(5, 4)<<std::endl;
	return 0;
}
