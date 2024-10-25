#ifndef Dog_hpp
#define Dog_hpp

#include "Pet.hpp"
#include <string>
#include <iostream>

using namespace std;

class Dog : public Pet {
  public:
    Dog(string name, float weight) : Pet(name, weight) { 
      this->fee = 2;
    }
    void bark() { cout << getPetName() << " barked\n"; }
    void eat() { cout << getPetName() << " ate\n"; }
    float calculateFee() { return fee * getWeight(); }

  private: 
    float fee;  
};

#endif