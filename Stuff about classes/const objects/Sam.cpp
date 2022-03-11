#include "Sam.h"
#include <iostream>
using namespace std;
 /** initializing variables that are
 constant requires this specific syntax **/
Sam::Sam(int a, int b)
: regVar(a), constVar(b)
{
    cout << "I am the constructor " << endl;
}

void Sam::print() {
    cout << "regular variable is: " << regVar << endl << "const variable is: " << constVar << endl;
}

void Sam::printShiz() {
    cout << "that's some not const shiz" << endl;
}

void Sam::printShiz2() const{
    cout << "that's some const shiz" << endl;
}

