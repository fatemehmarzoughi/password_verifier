#include <iostream>
#include "Example.h"

#include <cstring>

Example::Example() {

}

bool Example::passVerifier(char* pass) {

    int length = sprintf(pass, "%s", pass);
    bool hasEnoughLength = 0;
    bool hasUpperCaseLetter = 0;
    bool hasLowerCaseLetter = 0;
    bool hasDigit = 0;

    if(length < 6)
    {
      hasEnoughLength = 0;
      if(hasEnoughLength == 0) std::cout<<"The Password should contain at least 6 characters"<<std::endl;
    }
    else
    {
      hasEnoughLength = 1;
      for(int i=0 ; i<length ; i++)
      {
        if(islower(pass[i])) hasLowerCaseLetter = 1;
        if(isupper(pass[i])) hasUpperCaseLetter = 1;
        if(isdigit(pass[i])) hasDigit = 1;
      }
    }

    if(hasUpperCaseLetter == 0 ) std::cout<<"The Password should contain at least one Upper case letter"<<std::endl;
    if(hasLowerCaseLetter == 0 ) std::cout<<"The Password should contain at least one Lower case letter"<<std::endl;
    if(hasDigit == 0 ) std::cout<<"The Password should contain at least one Digit"<<std::endl;
    return (hasEnoughLength && hasLowerCaseLetter && hasUpperCaseLetter && hasDigit);
}
