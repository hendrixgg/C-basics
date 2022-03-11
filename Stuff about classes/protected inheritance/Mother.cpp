#include <iostream>
using namespace std;

class Mother
{
    public:
        int publicv;
        int getPrivateV();
        void setPrivateV(int);
    protected:/** What has direct acces:
                    - anything inside the class has access
                    - any friend of the class has access
                    - any class that inherits from this class has access
                essentially becomes a private variable for derived classes
               */
        int protectedv;
    private: // inherited but no direct access
             // only this class has direct access
        int privatev;
};

int Mother::getPrivateV() {
    return privatev;
}

void Mother::setPrivateV(int x) {
    privatev = x;
}

