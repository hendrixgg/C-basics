#include <iostream>
using namespace std;

class Sally
{
    public:
        int num;
        Sally();
        Sally(int);
        Sally operator+(Sally);
};

Sally::Sally()
{}

Sally::Sally(int a)
{
    num = a;
}

Sally Sally::operator+(Sally aso) {
    Sally new_obj;
    new_obj.num = (*this).num + aso.num; // the * dereferences a pointer into the actual object
    return new_obj;
}
