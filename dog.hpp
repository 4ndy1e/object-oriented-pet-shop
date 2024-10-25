#ifndef dog_hpp
#define dog_hpp

#include "pet.hpp"
#include <string>
#include <iostream>

using namespace std;

class dog : public pet {
  public:
    dog(string name, int weight);
    void bark() { cout << getPetName() << " barked\n";}
    void eat() { cout << getPetName() << " ate\n";}

  private: 
    float fee;  
};

#endif