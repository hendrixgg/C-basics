#include<iostream>
#include<string>
using namespace std;

class BigMans{
    private: // private: so they are only in the scope of the class/object
        string how_girthy, name;
        int girth;

    public: // public: so functions are in the scope of main
        BigMans(string n) { // contructor
            girth = 6969;
            how_girthy = "Way Too Girthy";
            name = n;
        };
        void setName(string n) {
            name = n;
        }
        string getName() {
            return name;
        }

        void print_info() {
            cout << name << " is your BigMans" << endl;
            cout << "Girthiness: " + how_girthy << endl;
            cout << "Measure of Girthiness: " << girth << endl;
        }
};

void do_Something(int a) {
    do_Something(--a);
}

/*
Constructors in c++ get called automatically when initializing the object.
   **you do not have to do: Person p = new Person("Joe"); like in java
     this is equivalent: Person p("Joe");

Constructors are not always required as variables get initalised anyway.
Constructors are just for initializing variables in a specific way.
*/
int main()
{
    BigMans man1("Girthy Gary");
    man1.print_info();
    cout << "\n";
    BigMans man2("Fat Joe");
    man2.print_info();
    return 0;
}
