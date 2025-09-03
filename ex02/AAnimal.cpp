#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << "AAnimal default constructor called.\n";
}

AAnimal::AAnimal(const AAnimal &other) : _type(other._type) {
    std::cout << "AAnimal copy constructor called.\n";
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called.\n ";
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << "AAnimal assignment operator called.\n ";
    if (this != &other)
        _type = other._type;
    return *this;
}

std::string AAnimal::getType() const {
    return _type;
}

