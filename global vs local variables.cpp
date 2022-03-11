#include <iostream>

using namespace std;

string var = "global"; // global variable

int main()
{
    string var = "main"; // local variable
    cout << var << " " << ::var << endl; // :: is the unary scope resolurion operator
    return 0;                            // it tells the program to use the global variable
}
