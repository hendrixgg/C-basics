#include <iostream>
#include "Sally.cpp"
using namespace std;

int main()
{
    Sally a(25), b(60), c;

    c = a + b; // overloaded the '+' operator

    cout << c.num << endl;
    return 0;
}
