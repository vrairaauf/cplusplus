/*
	g++ lib1.cpp -o sharedlib.dll -fpic -shared 
	g++ -c mainshared.cpp -o mainshared.o
	g++  mainshared.o -o mainshareda -L . -lsharedkib
*/
int add(int x, int y){
	return x+y+10;
}
/*------------------*/
int min(int x, int y){
	if(x<y)
		return x;
	return y;
}
/*-----------------*/