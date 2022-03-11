#include <iostream>
#include "Slapper.h"
using namespace std;

// the -> is called the arrow member selection operator
// it is required for pointers to acces member functions and variables of the object they point to
int main()
{
    Slapper dude;
    Slapper *dudePointer = &dude;

    dude.printCrap();
    dudePointer->printCrap();
    return 0;
}
