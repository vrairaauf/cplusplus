#include <string>
#include "Exception.h"

Exception::Exception(std::string title){
	this->title=title;
}
/*-------------*/
std::string Exception::getExceptionTitle(){
	return this->title;
}