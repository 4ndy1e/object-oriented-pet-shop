#ifndef pet_hpp
#define pet_hpp

#include "dog.hpp"
#include "cat.hpp"
#include <string>

using namespace std;

class pet {
  public:
    pet(string name, float weight) {this->name = name; this->weight = weight;}
    int getPetCount() { return petCount;}
    string getPetName() { return name;}
    float getWeight() { return weight;}
  private:
    static int petCount;
    string name;
    float weight;
};

#endif