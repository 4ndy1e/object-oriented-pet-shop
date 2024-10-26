#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  // create pets
  Dog* dog1 = new Dog("Bob", 65.0);
  Dog* dog2 = new Dog("Stan", 37.0);
  Cat* cat1 = new Cat("Tom", 12.0);

  // add pets to a vector
  vector<Pet*> pvec;
  pvec.push_back(dog1);
  pvec.push_back(dog2);
  pvec.push_back(cat1);

  // iterate through vector and calculate total
  float total = 0.0;

  for(int i = 0; i < pvec.size(); i++) {
    cout << pvec[i]->getPetName() << " " << pvec[i]->calculateFee() << "\n";
    total += pvec[i]->calculateFee();
  }

  cout << "total licensing fee = " << total << "\n";
}