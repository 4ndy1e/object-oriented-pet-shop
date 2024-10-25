#ifndef pet_hpp
#define pet_hpp

#include "dog.hpp"
#include "cat.hpp"
#include <string>

using namespace std;

class pet {
  public:
    pet();
    pet(string name, int weight) {this->name = name; this->weight = weight;};

  private:
    static int petCount;
    string name;
    int weight;
};

#endif