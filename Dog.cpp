#include<iostream>
#include"DogInterface.cpp"

#ifndef DOG_CPP
#define DOG_CPP
class Dog{
    public:
    Dog(DogInterface* dogInterface){
       _dogInterface =  dogInterface;
    }
    void drinkWater(){
        _dogInterface->drinkWater();
    }
    private:
    DogInterface* _dogInterface;

};
#endif