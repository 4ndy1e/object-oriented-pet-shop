#ifndef Pet_hpp
#define Pet_hpp

#include <string>

using namespace std;

class Pet {
  public:
    Pet(string name, float weight) : name(name), weight(weight) { petCount++; }
    int getPetCount() { return petCount; }
    string getPetName() { return name; }
    float getWeight() { return weight; }
    
  private:
    string name;
    float weight;
    static int petCount;
};

#endif