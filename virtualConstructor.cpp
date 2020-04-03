#include<iostream>
#include "Dog.cpp"
#include "DogImplementation.cpp"

int main(){
    DogImplementation* dogInt;
    Dog dog(dogInt);
    dog.drinkWater();
    return 0;
}