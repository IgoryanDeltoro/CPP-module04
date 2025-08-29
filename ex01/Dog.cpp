#include "Dog.hpp"

Dog::Dog() : Animal() {
    std::cout << "The default constructor created a dog.\n";
    this->_type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "The copy constructor created the copy of dog.\n";
}

Dog::~Dog() {
    std::cout << "The derived distructor killed a dog.\n ";
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "The assignment operator created the deep copy of dog.\n ";
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const {
    std::cout << "A dog: bark, bark!\n";
}