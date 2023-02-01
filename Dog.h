//
// Created by Ethan on 1/31/2023.
//

#ifndef CS311HW2_DOG_H
#define CS311HW2_DOG_H
using namespace std;

#include <string>

class Dog {
private:
//private member vairables
    string Name;
    int Age;
    string Breed;

public:
//public methods
    Dog();
    Dog(string name, int age, string breed);
    void setter(string name, int age, string breed);
    static void printDog(Dog dogToPrint);

};


#endif //CS311HW2_DOG_H
