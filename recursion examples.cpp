#include <iostream>

using namespace std;

void endless_recur() {
    cout << "doing something";
    endless_recur();
}

int factorial(int x) {
    if (x==1) return 1;

    return x * factorial(x-1);
}

int main()
{
    //endless_recur();
    cout << factorial(5) << endl;
}
