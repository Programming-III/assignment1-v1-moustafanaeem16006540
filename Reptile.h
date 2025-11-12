#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

#include "Animal.h"
#include <iostream>
using namespace std;

class Reptile : public Animal {
private:
    bool isVenomous;

public:
    Reptile();
    Reptile(string n, int a, bool h, bool v);
    void display() override;
    ~Reptile();

};

#endif









#endif
