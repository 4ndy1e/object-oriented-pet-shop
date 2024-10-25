#ifndef dog_hpp
#define dog_hpp

#include "pet.hpp"
#include <string>
#include <iostream>

using namespace std;

class dog : public pet {
  public:
    dog(string name, float weight) : pet(name, weight) { 
    this->fee = 2;
    }
    void bark() { cout << getPetName() << " barked\n";}
    void eat() { cout << getPetName() << " ate\n";}
    float calculateFee() { return fee * getWeight();}
    
  private: 
    float fee;  
};

#endif