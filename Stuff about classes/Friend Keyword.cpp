#include <iostream>

using namespace std;

class Beast{
    public:
        Beast(){stinkVar=0;}
    private:
        int stinkVar;

    friend void friendlyBeast(Beast &be);
};

void friendlyBeast(Beast &be){
    be.stinkVar = 99;
    cout << be.stinkVar << endl;
}

int main()
{
    Beast bear;
    friendlyBeast(bear);
    return 0;
}
