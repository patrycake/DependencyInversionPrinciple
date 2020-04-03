#include<iostream>
#include "Dog.cpp"
#include "DogImplementation.cpp"

int main(){
    
    DogImplementation * dogInt_ptr = new DogImplementation;
    Dog dog(dogInt_ptr);
    dog.drinkWater();
    return 0;
}