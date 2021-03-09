#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <string>

#include "Foo.h"
#include "Example.h"
int main()
{
  char string1[100] = "Eaglet!@#3";
  char string2[100] = "eaglet432";
  char string3[100] = "Eagl";

  char* a = string1;
  char* b = string2;
  char* c = string3;

  Example d = Example();
  std::cout<< "first password : "<<std::endl;
  std::cout<< d.passVerifier(a)<<std::endl;
  std::cout<< "second password : "<<std::endl;
  std::cout<< d.passVerifier(b)<<std::endl;
  std::cout<< "third password : "<<std::endl;
  std::cout<< d.passVerifier(c)<<std::endl;
  return 0;
}
