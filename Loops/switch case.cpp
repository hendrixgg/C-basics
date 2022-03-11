#include <iostream>

using namespace std;

int main() {
    // works just like in java
    int age;
    cout << "Enter your age";
    cin >> age;
    cout << endl;
    switch(age) {
        case 16:
            cout << "you're 16" << endl;
            break;
        case 18:
            cout << "you're 18" << endl;
            break;
        case 21:
            cout << "Get off my lawn" << endl;
            break;
        default:
            cout << "sorry you get nothing" << endl;
    }
}
