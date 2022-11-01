#include <algorithm>
#include <iostream>
#include <vector>

int main(){
	std::vector<int> v;
	for(int cmp=0; cmp<10; cmp++)
		v.push_back(cmp+1);
	for(int cmp=0; cmp<10; cmp++)
		std::cout << v[cmp] << std::endl;
	v.push_back(2);
	v.push_back(1);
	sort(v.begin(), v.end());
	for(int cmp=0; cmp<12; cmp++)
		std::cout << v[cmp] << std::endl;
	std::cout <<"size : " << v.size() << std::endl << "capacity : " << v.capacity() << std::endl;
	return 0;
}