#include <iostream>
#include <cstdlib> // must include this library for the rand function
#include <ctime> // for access to the system time
using namespace std;

int main()
{
    srand(time(0)); // seeds a number to change the rand() algorithm slightly
                    // time(0) is the number of seconds at the start of the program since 1970 or something

                    // since time 0 will always be different srand will always have a different seed value
                    // and therefore make the rand() function different every time

    for(int i=0; i < 25; i++)
        cout << rand() << endl;

    return 0;
}
