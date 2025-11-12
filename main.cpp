#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
Animal::Animal() {
    name = "";
    age = 0;
    isHungry = false;
}

Animal::Animal(string n, int a, bool h) {
    name = n;
    age = a;
    isHungry = h;
}

Animal::~Animal() {}

void Animal::display() {
    cout <<"Name"<< name << " Age " << age <<endl;
    if (isHungry)
        cout << "Hungry";
    else
        cout << "Not Hungry";
    cout << ")";
}

void Animal::feed() {
    if (isHungry) {
        cout << "Fed" << name << endl;
        isHungry = false;
    } else {
        cout << name << " is not hungry" << endl;
    }
}

Mammal::Mammal() : Animal() {
    furColor = "";
}

Mammal::Mammal(string n, int a, bool h, string c) : Animal(n, a, h) {
    furColor = c;
}

Mammal::~Mammal() {}

void Mammal::display() {
    Animal::display();
    cout << endl;
}

Bird::Bird() : Animal() {
    wingSpan = 0.0;
}

Bird::Bird(string n, int a, bool h, float s) : Animal(n, a, h) {
    wingSpan = s;
}

Bird::~Bird() {}

void Bird::display() {
    Animal::display();
    cout << endl;
}

Reptile::Reptile() : Animal() {
    isVenomous = false;
}

Reptile::Reptile(string n, int a, bool h, bool v) : Animal(n, a, h) {
    isVenomous = v;
}

Reptile::~Reptile() {}

void Reptile::display() {
    cout << name << " Age " << age << endl;
    if (isVenomous)
        cout << "Venomous ";
    else
        cout << "Not Venomous ";
    if (isHungry)
        cout << "Hungry";
    else
        cout << "Not Hungry";
    cout << endl;
}

Enclosure::Enclosure() {
    capacity = 5;
    currentCount = 0;
    animals = new Animal*[capacity];
}

Enclosure::Enclosure(int c) {
    capacity = c;
    currentCount = 0;
    animals = new Animal*[capacity];
}

Enclosure::~Enclosure() {
    for (int i = 0; i < currentCount; i++) {
        delete animals[i];
    }
    delete[] animals;
}

void Enclosure::addAnimal(Animal* a) {
    if (currentCount < capacity) {
        animals[currentCount] = a;
        currentCount++;
    } else {
        cout << "Enclosure full" << endl;
    }
}

void Enclosure::displayAnimals() {
    cout << "Enclosure Animals" << endl;
    for (int i = 0; i < currentCount; i++) {
        animals[i].display();
    }
}

Visitor::Visitor() {
    visitorName = "";
    ticketsBought = 0;
}

Visitor::Visitor(string name, int tickets) {
    visitorName = name;
    ticketsBought = tickets;
}

Visitor::~Visitor() {}

void Visitor::displayInfo() {
    cout << "Visitor Info" << endl;
    cout << "Name" << visitorName << endl;
    cout << "Tickets Bought " << ticketsBought << endl;
}


// ============== MAIN FUNCTION ==============
int main() {
    Enclosure e1(3);

    e1.addAnimal(new Mammal("Lion", 5, true, "FREEZE"));
    e1.addAnimal(new Bird("Parrot", 2, false, 0.25));
    e1.addAnimal(new Reptile("Snake", 3, true, true));
    e1.displayAnimals();
    Visitor v1("Salma mohammed", 3);
    v1.displayInfo();

    return 0;
}

    
    
    
    return 0;
}
