#include "classes.cpp"
#include <iostream>
using namespace std;

/** Good article: https://www.geeksforgeeks.org/inheritance-in-c/ */
int main()
{
    Mother mom;
    mom.sayName();

    Daughter tina;
    tina.sayName();
    return 0;
}
