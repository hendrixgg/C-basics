#include <iostream>

using namespace std;

// Abstract class is a class that contain pure virtual functions
class Enemy {
    public:
        // this means that it is a pure virtual function and must
        // be implemented by a derived class
        virtual void attack()=0;
//        virtual void attack() {
//            cout << "i am the Enemy class" << endl;
//        }
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "ninja attack!" << endl;
        }
};

class Monster: public Enemy {
    public: // as you can see the virtual function is called when
            // a derived class does not implement the function
        void attack() {
            cout << "monster attack!" << endl;
        }
};

/**
    Pure virtual functions must be implemented in derived classes
    Regular virtual functions may or may not be implemented in derived classes
*/

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
    return 0;
}
