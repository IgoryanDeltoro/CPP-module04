#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "The default constructor created an animal.\n";
}

Animal::Animal(const Animal &other) : _type(other._type) {
    std::cout << "The copy constructor created the copy of animal.\n";
}

Animal::~Animal() {
    std::cout << "The base distructor killed an animal.\n ";
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "The assignment operator create the deep copy of animal.\n ";
    if (this != &other)
        _type = other._type;
    return *this;
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << "An animal: Zzz......\n";
}