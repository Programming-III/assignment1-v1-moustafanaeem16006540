#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"
#include <iostream>
using namespace std;

class Enclosure {
private:
    Animal** animals;
    int capacity;
    int currentCount;

public:
    Enclosure();
    Enclosure(int c);
    void addAnimal(Animal* a);
    void displayAnimals();
        ~Enclosure();
};

#endif

//define enclosure class here 








#endif
