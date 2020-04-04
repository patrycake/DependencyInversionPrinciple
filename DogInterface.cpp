#include <iostream>

#ifndef DOGINT_CPP
#define DOGINT_CPP

class DogInterface{
    private:
    public:
    DogInterface(){}
    virtual void drinkWater()=0;
    virtual void drinkWater(std::string)=0;
};
#endif