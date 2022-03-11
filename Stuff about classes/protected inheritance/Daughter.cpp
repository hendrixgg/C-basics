#include <iostream>
using namespace std;

// public so that the members from the mother
// class are public for objects in this class
class Daughter: public Mother
{
    public:
        void doSmth();
};

void Daughter::doSmth() {
    publicv = 1;
    protectedv = 2;
    // privatev = 3; not ok!!

    // \/ below is ok \/
    setPrivateV(3);
    cout << "private variable: " << getPrivateV() << endl;
}
