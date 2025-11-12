#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string n, int a, bool h);
    virtual void display();
    virtual void feed();
     virtual ~Animal();
};


#endif
