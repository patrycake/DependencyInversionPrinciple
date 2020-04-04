#include<iostream>
#include "Dog.cpp"
#include "DogImplementation.cpp"

int main(){
    
    
    DogImplementation* dogImp_ptr = new DogImplementation;
    DogInterface* dogInt_ptr = new DogImplementation;
    Dog dog(dogImp_ptr, "Fido");
    Dog dog2(dogInt_ptr, "Fifi");
    dog.drinkWater();
    dog2.drinkWater();
    dog.drinkWater();
    dog2.drinkWater();
    return 0;
}