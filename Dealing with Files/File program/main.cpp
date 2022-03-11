#include <iostream>
#include <fstream>
using namespace std;

int getwhatTheyWant();
void displayItems(int type);

///main function
int main()
{
    int whatTheyWant;

    whatTheyWant = getwhatTheyWant();

    while(whatTheyWant != 4) {

        switch(whatTheyWant) {
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }

        whatTheyWant = getwhatTheyWant();
    }

}

///getwhatTheyWant function
int getwhatTheyWant(){
    int choice;

    cout << "\n1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program" << endl;

    cin >> choice;
    return choice;
}

///display items function
void displayItems(int type) {
    ifstream itemFile("items.txt");
    string name;
    double power;

    if(type == 1) {
        while (itemFile >> name >> power) {
            if (power == 0) {
                cout << name << ' ' << power << endl;
            }
        }
    } else if(type == 2) {
        while (itemFile >> name >> power) {
            if (power > 0) {
                cout << name << ' ' << power << endl;
            }
        }
    } else if(type == 3) {
        while (itemFile >> name >> power) {
            if (power < 0) {
                cout << name << ' ' << power << endl;
            }
        }
    }
}
