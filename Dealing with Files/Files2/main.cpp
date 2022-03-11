#include <iostream>
#include <fstream>
using namespace std;

/**
    useful: https://www.cplusplus.com/reference/fstream/
*/
int main()
{
    ofstream coolFile("beefjerky.txt");

    // checks if the coolFile object is associated with a file
    if(coolFile.is_open()) {
        cout << "ok the file is open" << endl;

        coolFile << "oh i love the beef!\n";
        coolFile.close();
    } else {
        cout << "hendrix you messed up" << endl;
    }
}
