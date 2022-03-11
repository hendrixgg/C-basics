#include <iostream>

class Entity
{
public:
    int ex[5];

    Entity()
    {
        for (int i = 0; i < 5; ++i)
            ex[i] = 2;
    }
};

// https://www.youtube.com/watch?v=QEKmS221MtM for the problem with the 2d array printing
int main()
{
    Entity e;
    std::cout << e.ex[0] << std::endl;
    std::cout << e.ex[4] << std::endl;

    return 0;
}
