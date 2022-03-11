#include <iostream>
using namespace std;

int main() {

    try{
        int momsAge = 50;
        int sonsAge = 34;

        if (sonsAge > momsAge) {
                throw 99;
        }
    }catch(int x){
        cout << "son cannot be older than mom, ERROR NUMBER: " << x << endl;
    }

    try{

        int num1;
        cout << "Enter first number: " << endl;
        cin >> num1;

        int num2;
        cout << "Enter second number: " << endl;
        cin >> num2;

        if(num2 == 0) {
            throw 0;
        }

        cout << "num1 / num2 = " << num1/num2 << endl;

    }catch(...){ // any thrown data type will be caught when using ...
        cout << "you can't divide by " << 0 << endl;
    }

}
