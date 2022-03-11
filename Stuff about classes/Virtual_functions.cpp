#include <iostream>

using namespace std;

class Enemy {
public:
    virtual void attack(){} // means that this will be used polymorphically
                            // essentially a template function for derived classes
};
                // allows enemy pointers that point to classes that derive
                // from Enemy, to directly call their respective attack() functions
class Ninja: public Enemy {
    public:
        void attack() {
            cout << "ninja attack!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "monster attack!" << endl;
        }

};

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
