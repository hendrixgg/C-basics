#include <iostream>

using namespace std;

void passByReference(string& x);
void passByValue(string x);

/**
Two ways to pass variables:
 - Pass by value
 - Pass by reference

 pass by value: is just passing a copy of the variable

 pass by reference: gives the function direct access to the variable
 and the function can actually modify the variable without returning a value
 does not have to instantiate a new variable each time

 refer to: https://stackoverflow.com/questions/1238613/what-is-the-
 difference-between-the-dot-operator-and-in-c
*/
int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);

    string wasteMans = "Mans", wasteYute = "Yute";

    cout << wasteMans << " " << wasteYute << endl;

    passByValue(wasteMans);
    passByReference(wasteYute);

    cout << wasteMans << " " << wasteYute << endl;

    passByReference(wasteYute);
}

void passByValue(string x) {
    x = "99";
}
void passByReference(string& x) {
    if (x=="Yute" || x=="66") cout << "true" << endl;
    x = "66";
}
