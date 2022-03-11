#include <iostream>
#include <fstream>
using namespace std;

/**
    useful: https://www.cplusplus.com/reference/fstream/
*/
int main()
{

    int id;
    string name;
    double money;

    
    // writing data to a file
    // ofstream outFile("players.txt");

    // cout << "Enter players ID, Name, and Money" << endl;
    // cout << "press Crtl+Z to quit\n" << endl;


    // while(cin >> id >> name >> money) {
    //     outFile << id << ' ' << name << ' ' << money << endl;
    // }
    

    // reading data from a file
    ifstream inFile("players.txt");

    // objects that are not null return true when evaluated as boolean
    // null objects/pointers return false
    while(inFile >> id >> name >> money) {
        cout << id << ", " << name << ", " << money << endl;
    }
    // do not have to do file.close() because as soon as a file reads
    //"end of file character" it's desrtuctor gets called and does it for you
}
