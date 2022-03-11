#include <iostream>
using namespace std;

class Hanzo
{
    public:
        Hanzo(int);
        void printStuff();
    private:
        int h;
};

Hanzo::Hanzo(int num)
:h(num)
{
}

void Hanzo::printStuff() {
    cout << "h=" << h << endl; // implicit
    cout << "this->h=" << this->h << endl; // explicit
    cout << "(*this).h=" << (*this).h << endl; // * dereferences a pointer // also explicit
}

int main()
{
    Hanzo ha(25);
    ha.printStuff();
    return 0;
}
