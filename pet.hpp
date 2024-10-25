#ifndef pet_hpp
#define pet_hpp

#include "dog.hpp"
#include "cat.hpp"
#include <string>

using namespace std;

class pet {
  public:
    pet(string name, int weight) {this->name = name; this->weight = weight;}
    int getPetCount() { return petCount;}
    string getPetName() { return name;}
    float calculateFee() { }

  private:
    static int petCount;
    string name;
    int weight;
};

#endif