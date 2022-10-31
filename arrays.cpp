#include<iostream>
bool serachIndex(int *arr, int size, int index);
int arrayLength(int *arr);
int *arrayAppend(int *arr, int *n, int item);
int *remplir(int *arr,int n);
void clearArray(int *arr);
int main()
{
	int *n=new int;
	int c;
	std::cout << "choose a number : "<< std::endl;
	while(!(std::cin >> c))
	{
		std::cout << "choose a number : "<< std::endl;
		std::cin.clear();
		std::cin.ignore(10, '\n');
	}
	n=c;
	std::cout << n;
	system("exit");
	int *arrayOfInteger=new int[n];
	int *otherArray ;
	arrayOfInteger=remplir(arrayOfInteger, n);

	for(int cmp=0; cmp<*n; cmp++){
		std::cout << arrayOfInteger[cmp] << std::endl;
	}
	if(serachIndex(arrayOfInteger, n, 10))
		std::cout << "10 is in the array" << std::endl;
	//for(int cmp=0; arrayOfInteger[cmp]; cmp++)
	//	std::cout << arrayOfInteger[cmp] << std::endl;
	std::cout << "length of the array : " << arrayLength(arrayOfInteger)<< std::endl;
	otherArray=arrayAppend(arrayOfInteger,&n, 102);
	otherArray=arrayAppend(arrayOfInteger,&n, 103);
	otherArray=arrayAppend(arrayOfInteger,&n, 104);
	for(int cmp=0; otherArray[cmp]; cmp++)
		std::cout << otherArray[cmp] << std::endl;
	std::cout << "length of the array : " << arrayLength(otherArray)<< std::endl;
	delete[] otherArray;
	//delete[] arrayOfInteger;
	return 0;
}
/*--------------*/
bool serachIndex(int *arr, int size, int index){
	for(int cmp=0; cmp<size; cmp++){
		if(arr[cmp]==index)
			return true;
	}
	return false;
}
/*---------------*/
int arrayLength(int *arr){
	int cmp=0;
	for(cmp=0; arr[cmp]; cmp++);
	return cmp;	
}
/*---------------*/
int *arrayAppend(int *arr, int *n ,int item){
	int length=arrayLength(arr)+1;
	static int* newArray=new int[length];
	for(int cmp=0; cmp<*n; cmp++)
	{
		newArray[cmp]=arr[cmp];
	}
	newArray[length-1]=item;

	//delete[] arr;
	return newArray;
}
/*--------------------*/
int *remplir(int *arr,int n){
	for(int cmp=0; cmp<n; cmp++)
		arr[cmp]=cmp+1;
	return arr;
}
/*---------------------*/
void clearArray(int *arr){
	delete[] arr;
}
/*---------------------*/