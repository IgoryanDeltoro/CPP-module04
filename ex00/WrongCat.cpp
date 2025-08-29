#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    std::cout << "The default constructor created a WrongCat.\n";
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    std::cout << "The copy constructor created the copy of WrongCat.\n";
    this->_type = other._type;
}

WrongCat::~WrongCat() {
    std::cout << "The derived distructor killed a WrongCat.\n ";
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "The assignment operator created the deep copy of WrongCat.\n ";
    if (this != &other)
        WrongCat::operator=(other);
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "A WrongCat: meows, meows!\n";
}