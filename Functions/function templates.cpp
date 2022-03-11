#include <iostream>
using namespace std;

// the T gets replaced with whatever
// data type is passed into the function
template <class T>
T add(T a, T b) {
    return a+b;
}

int main() {
    int x=7.786, y=78.1234, z;
    z=add(x,y);
    cout << z << endl;
}
