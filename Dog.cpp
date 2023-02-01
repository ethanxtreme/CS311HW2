//
// Created by Ethan on 1/31/2023.
//
#include "Dog.h"
#include <iostream>
#include <utility>
using namespace std;

    Dog::Dog(){
        this-> Name = "";
        this->Age = -1;
        this->Breed = "";
    }

    Dog::Dog(string name, int age, string breed){//constructor
        //set private member variables
        this-> Name = name;
        this->Age = age;
        this->Breed = breed;
    }

    void Dog::setter(string name, int age, string breed){
        this-> Name = name;
        this->Age = age;
        this->Breed = breed;
    }

//    void Dog::setName(string name){
//        this->Name = name;
//    }
//
//    void Dog::setAge(int age){
//        this->Age = age;
//    }
//
//    void Dog::setBreed(string breed){
//        this->Breed = breed;
//    }

    void Dog::printDog(Dog dogToPrint){
        cout << endl;
        cout << "Name: " << dogToPrint.Name << endl;
        cout << "Age: " << dogToPrint.Age << endl;
        cout << "Breed: " << dogToPrint.Breed << endl;
        cout << endl;
    }
