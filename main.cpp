#include <iostream>
#include "Dog.h"

using namespace std;

int main() {

    Dog Dogs[3];


    Dogs[0].setter("Roxy", 10, "PitBull");
    Dog::printDog(Dogs[0]);



    for(int i = 0; i < 3; i++){
        Dog::printDog(Dogs[i]);
    }

}

