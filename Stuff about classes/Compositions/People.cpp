#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

People::People(string n, Birthday bd)
: name(n), dateOfBirth(bd) // should be done for objects or constant variables
{
}

void People::printInfo() {
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
