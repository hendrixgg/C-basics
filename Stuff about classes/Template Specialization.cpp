#include <iostream>

using namespace std;

template <class T>
class Spooky{
public:
    Spooky(T x){
        cout << x << " is not a character!" << endl;
    }
};

template<>
class Spooky<char>{
public:
    Spooky(char c){
        cout << c << " is indeed a character!" << endl;
    }
};

int main()
{
    Spooky<int> obj1(7);
    Spooky<double> obj2(3.14159);
    Spooky<char> obj3('c');
}
