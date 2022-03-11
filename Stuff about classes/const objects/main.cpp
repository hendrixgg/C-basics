#include <iostream>
#include "Sam.h"

using namespace std;

int main()
{
    const Sam constSam(1,1);

    //constSam.printShiz(); // does not work because the Sam obj is const but the function printShiz is not
    constSam.printShiz2();
    cout << endl;

    Sam coolsam(3,92);
    coolsam.print();
    cout << endl;
    return 0;
}
