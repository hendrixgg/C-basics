#include <iostream>

class Mother
{
    public:
        Mother();
        void sayName();
};

Mother::Mother()
{
}

void Mother::sayName() {
    std::cout << "I am a Gryspeerdt" << std::endl;
}


// public so that the members from the mother
// class are public for objects in this class
class Daughter: public Mother
{
    public:
        Daughter();
};

Daughter::Daughter()
{
    //ctor
}
