#include "Burrito.h"
#include <iostream>

using namespace std;

/**
This is the source file for the Burrito class.

This file will contain the bodies of functions essentially.
*/
/*
the :: is called the binary scope resolution operator

it's basically saying that the constructor Burrito() is a member of the class Burrito.

in general Thing::function() means that the function() is a member of the Thing class.
*/
Burrito::Burrito()
{
    cout << "I am a banna" << endl;
}
