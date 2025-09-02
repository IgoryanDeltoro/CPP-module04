#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat default constructor called.\n";
    this->_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called.\n";
    this->_type = other._type;
}

Cat::~Cat() {
    std::cout << "Cat destructor called.\n ";
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called.\n ";
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "A cat: meows, meows!\n";
}