# Pet Shop Licensing Fee System

This program is a C++ system to help a pet shop manage licensing fees for their pets, specifically for dogs and cats. Each type of pet has a licensing rate based on its weight, calculated per pound. The system tracks pets, calculates individual fees, and provides the total monthly licensing fee.

## Features

- **Pet Management**: Tracks individual pets by type (dog or cat) and their weights.
- **Licensing Fee Calculation**: Calculates the monthly licensing fee based on the type of pet and its weight.
- **Polymorphism**: Uses an abstract base class `Pet` with a virtual function `CalculateFee()` to calculate fees for different pet types.
- **Inheritance**: Reuses code by organizing pets in an inheritance hierarchy.

## Requirements

- **C++ Compiler** (g++ recommended)
- **Standard C++ Libraries** (for basic I/O and STL containers)

## Installation

1. Clone the repository or download the source files.
   ```bash
   git clone https://github.com/4ndy1e/object-oriented-pet-shop.git
   cd object-oriented-pet-shop
   ```

2. Compile the code using a C++ compiler:
   ```bash
   g++ -o pet_shop pet_shop.cpp
   ```

3. Run the compiled program:
   ```bash
   ./pet_shop
   ```

## Usage

1. **Pet Initialization**: The `main` function initializes pets with their names, weights, and types.
2. **Fee Calculation**: A loop calculates and displays each pet's licensing fee and accumulates the total fee.
3. **Example Output**:
   ```
   Bob 130
   Stan 74
   Tom 18
   total licensing fee = 222
   ```

## Code Structure

- `Pet` - An abstract base class that provides a virtual `CalculateFee()` function.
- `Dog` and `Cat` - Classes that inherit from `Pet`, each with a static licensing rate per pound.
- **Static Licensing Rate** - Each pet type has a static rate variable, e.g., $2/pound for dogs and $1.50/pound for cats.
- **Vector of Pet Pointers** - A vector of `Pet
