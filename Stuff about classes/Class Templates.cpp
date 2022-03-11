#include <iostream>

using namespace std;

template <class T> class two {
    T first, second;
    public:
        two(T a, T b) {
            first=a;
            second=b;
        }
        T bigger();
};

template <class T> T two<T>::bigger() {
    return first > second ? first : second;
}

int main()
{
    two<int> pairObj(12, 24);

    cout << pairObj.bigger() << endl;
    return 0;
}
