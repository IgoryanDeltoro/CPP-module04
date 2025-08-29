#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Animal") {
    std::cout << "The default constructor created an WrongAnimal.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) {
    std::cout << "The copy constructor created the copy of WrongAnimal.\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "The base distructor killed an WrongAnimal.\n ";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "The assignment operator create the deep copy of WrongAnimal.\n ";
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