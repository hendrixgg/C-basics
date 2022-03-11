#include <iostream>

using namespace std;

//void printArr(int arr[], int size); // for if the function is defined below main
void printArr(int* begin, int size) {
    cout << "[ ";
    for (int i = 0; i < size-1; i++ ) {
        cout << begin[i] << ", ";
    }
    cout << begin[size-1] << " ]";
}

// prints a 2d array with square braces and commas
void printArr_2d(int* arr, int rows, int cols) {
    // first row
    cout << "[ ";
    printArr(arr, cols);
        cout << "," << endl;

    // inner rows
    for (int i=1; i<rows-1; i++){
        cout << "  ";
        printArr((arr + i*cols), cols);
        cout << "," << endl;
    }

    // last row
    cout << "  ";
    printArr((arr + (rows-1)*cols), cols);
    cout << " ]" << endl;

}


// https://www.youtube.com/watch?v=QEKmS221MtM for the problem with the 2d array printing
int main()
{
    int n = 5, m = 5;

    int arr_1D[n] = {123, 123, 124, 432, 235};
    printArr(arr_1D,5);
    cout << endl << endl;

    int arr_2D[n][m] = {{4, 2, 8, 6, 9},
                        {3, 4, 7, 9, 3},
                        {6, 3, 4, 5, 2},
                        {1, 3, 2, 4, 5},
                        {6, 3, 8, 7, 0}};
   // printArr_2d((int*)arr_2D, n, m);



    return 0;
}
