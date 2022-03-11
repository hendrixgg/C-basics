#include <iostream>

using namespace std;
//refer to: https://stackoverflow.com/questions/1238613/what-is-the-
//difference-between-the-dot-operator-and-in-c
int main() {
    string fish;
    cin >> fish;
    // the & sign in front of a variable makes a reference to
    // the memory address for that variable
    cout << &fish << endl;

    string *fishpointer; // holds a memory address for a vairable of type int
    fishpointer = &fish;

    cout << *fishpointer << endl; // adding the * dereferences the pointer and gets the value
}
