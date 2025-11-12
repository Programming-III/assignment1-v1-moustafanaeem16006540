#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <iostream>
using namespace std;

class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal();
    Mammal(string n, int a, bool h, string c);
    void display() override;
     ~Mammal();
};

#endif

//define mammal class here






#endif
