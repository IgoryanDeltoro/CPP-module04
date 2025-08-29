#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "The default constructor created a cat.\n";
    this->_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "The copy constructor created the copy of cat.\n";
    this->_type = other._type;
}

Cat::~Cat() {
    std::cout << "The derived distructor killed a cat.\n ";
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "The assignment operator created the deep copy of cat.\n ";
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "A cat: meows, meows!\n";
}