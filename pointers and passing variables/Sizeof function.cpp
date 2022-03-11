#include <iostream>

using namespace std;

int main() {

    char c;
    cout << "char: " << sizeof(c) << " max val = " << CHAR_MAX << endl;

    int i;
    cout << "int: " << sizeof(i) << " max val = " << INT_MAX << endl;

    long long L;
    cout << "long long: " << sizeof(L) << " max val = " << (1LL << 63) - 1LL << endl;

    double d;
    cout << "double: " << sizeof(d) << endl;

    // size of an aray
    double bucky[10];
    cout << "bucky: " << sizeof(bucky) << endl;

    // number of elements in array
    cout << "num elements: " << sizeof(bucky) / sizeof(bucky[0]) << endl;


}
