#include <iostream>
using namespace std;

// when less than 3 parameters are inputted default value is 1
int volume(int l=1, int w=1, int h=1);

void printNumber(int x) {
    cout << "Printing integer " << x << endl;
}
void printNumber(float x){
    cout << "Printing float " << x << endl;
}

int main()
{
    // default values example
    cout << "volume is " << volume(5,6) << endl;

    // overlaoding example
    int a = 54;
    float b = 98.123;
    printNumber(a);
    printNumber(b);
}

// for default value example
int volume(int l, int w, int h){
    return l*w*h;
}
