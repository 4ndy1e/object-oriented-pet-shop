#ifndef Cat_hpp
#define Cat_hpp

#include "Pet.hpp"
#include <string>
#include <iostream>

using namespace std;

class Cat : public Pet {
  public:
    Cat(string name, float weight) : Pet(name, weight) { 
      this->fee = 2;
    }
    void meow() { cout << getPetName() << " meowed\n"; }
    void eat() { cout << getPetName() << " ate\n"; }
    float calculateFee() { return fee * getWeight(); }

  private: 
    float fee;  
};

#endif

