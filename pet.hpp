#ifndef Pet_hpp
#define Pet_hpp

#include <string>

using namespace std;

class Pet {
  public:
    Pet(string name, float weight) : name(name), weight(weight) {} 
    string getPetName() { return name; }
    float getWeight() { return weight; }
    virtual float calculateFee() = 0;
    
  private:
    string name;
    float weight;
};

#endif