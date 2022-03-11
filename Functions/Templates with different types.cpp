#include <iostream>

using namespace std;

template <class T1, class T2>
T1 smaller(T1 a, T2 b) {
        return (a<b ? a : b);
}

int main() {

    int a = 98;
    double b = 47.123;
    cout << smaller(a,b) << endl;
}
