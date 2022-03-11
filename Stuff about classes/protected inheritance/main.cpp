#include "Mother.cpp"
#include "Daughter.cpp"
#include <iostream>
using namespace std;

int main()
{
    Daughter tina;
    tina.doSmth();

    cout << "public var: " << tina.publicv << endl;
    // cout << "protected var: " << tina.protectedv << endl; not ok!!
    return 0;
}
