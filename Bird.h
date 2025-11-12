#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Bird : public Animal {
private:
    float wingSpan;

public:
    Bird();
    Bird(string n, int a, bool h, float s);
    void display() override;
~Bird();
};

#endif

//define class bird here 







#endif
