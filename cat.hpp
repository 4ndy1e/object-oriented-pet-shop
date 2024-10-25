#ifndef cat_hpp
#define cat_hpp

#include "pet.hpp"
#include <string>
#include <iostream>

using namespace std;

class cat : public pet {
  public:
    cat(string name, float weight) : pet(name, weight) {
      this->fee = 1.50;
    };
    void meow() { cout << getPetName() << " meowed\n";}
    void eat() { cout << getPetName() << " ate\n";}
    float calculateFee() { return fee * getWeight();}
    
  private: 
    float fee;  
};

#endif

