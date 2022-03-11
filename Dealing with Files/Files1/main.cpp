#include <iostream>
#include <fstream> // need to include to use files
using namespace std;

/**
    useful: https://www.cplusplus.com/reference/fstream/
*/
int main() {

    ofstream hendrFile;
    // if a file doe not exist in the folder a new one will be created
    hendrFile.open("tuna.txt");

    hendrFile << "wow this is really cool!\n";

    hendrFile.close();

}
