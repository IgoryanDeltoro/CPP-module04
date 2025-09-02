#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Animal") {
    std::cout << "WrongAnimal default constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) {
    std::cout << "WrongAnimal copy constructor called.\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal base distructor called.\n ";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "WrongAnimal assignment operator called.\n ";
    if (this != &other)
        _type = other._type;
    return *this;
}

std::string WrongAnimal::getType() const {
    return _type;
}

void WrongAnimal::makeSound() const {
    std::cout << "An WrongAnimal: Zzz......\n";
}