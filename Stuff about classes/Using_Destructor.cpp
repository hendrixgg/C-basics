#include <iostream>

using namespace std;
class Sam
{
    public:
        Sam();
        ~Sam();
        void printShiz();
        void printShiz2() const;

    protected:

    private:
};

Sam::Sam()
{
    cout << "I am the constructor " << endl;
}

/** Destructor
A destructor is a member function that is invoked automatically when the object goes out of scope or is
explicitly destroyed by a call to delete. A destructor has the same name as the class, preceded by a
tilde (~). For example, the destructor for class Sam is declared: ~Sam().

If you do not define a destructor, the compiler will provide a default one; for many classes this is
sufficient. You only need to define a custom destructor when the class stores handles to system
resources that need to be released, or pointers that own the memory they point to.

NOTE:
 - you can only ever have 1 destructor (no overloading)
 - the destructor cannot have parameters
 - the destructor cannot have a return type not even void
*/
Sam::~Sam()
{
    cout << "I am the destructor" << endl;
}

void Sam::printShiz() {
    cout << "i am just a dude" << endl;
}

int main()
{
    Sam s;
    //cout << "omg wtf are you doing in my room?" << endl;

    s.printShiz();

    cout << endl;
    return 0;
}
