#include <iostream>
#include "DogInterface.cpp"

#ifndef DOGIMP_CPP
#define DOGIMP_CPP
class DogImplementation: public DogInterface{
    public:
    DogImplementation(){}
    void drinkWater() override {
        std::cout << "Dog drinking water" << std::endl;
    }
    void drinkWater(std::string name) override {
        std::cout << "Dog " << name << " drinking water" << std::endl;
    }
};
#endif