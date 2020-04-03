#include <iostream>
#include "DogInterface.cpp"

#ifndef DOGIMP_CPP
#define DOGIMP_CPP
class DogImplementation: public DogInterface{
    public:
    DogImplementation(){}
    void drinkWater() {
        std::cout << "Dog drinking water" << std::endl;
    }
};
#endif