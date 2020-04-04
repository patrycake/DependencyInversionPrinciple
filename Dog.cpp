#include<iostream>
#include"DogInterface.cpp"

#ifndef DOG_CPP
#define DOG_CPP
class Dog{
    public:
    Dog(DogInterface* dogInterface, std::string name):
    _dogInterface(dogInterface),
    _name(name){}
    void drinkWater(){
        _dogInterface->drinkWater(_name);
    }
    private:
    DogInterface*  _dogInterface;
    std::string _name;

};
#endif