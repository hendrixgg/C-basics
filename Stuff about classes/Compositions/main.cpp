#include <iostream>
#include "People.h"
#include "Birthday.h"
using namespace std;

int main()
{
    Birthday d_of_b(2, 20, 2004);

    People matias("Matias Solis", d_of_b);

    matias.printInfo();
    return 0;
}
