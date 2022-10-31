#include <iostream>

template<typename T>
T maxr(T x, T y){
	if(x>y)
		return x;
	return y;
}
int main(){
	int x=10, y=15;
	float f1=12.15, f2=15.36;
	int max=maxr<int>(x, y);
	float maxf=maxr<float>(f1, f2);
	std::cout << max << std::endl;
	std::cout << maxf << std::endl;
	return 0;
}
/*--------------------*/
