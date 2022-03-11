#include <iostream>

using namespace std;

int main() {
    int arr[5];
    int *ar0 = &arr[0];
    int *ar1 = &arr[1];
    int *ar2 = &arr[2];
    //int *ar0 = &arr[0];
    //int *ar0 = &arr[0];

    cout << "ar0 is at " << ar0 << endl;
    cout << "ar1 is at " << ar1 << endl;
    cout << "ar2 is at " << ar2 << endl;

    ar0++; // now points to the next element in the array
    cout << "ar0 is now at " << ar0 << endl;

}
