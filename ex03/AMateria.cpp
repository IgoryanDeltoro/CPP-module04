#include "AMateria.hpp"

AMateria::AMateria() : _type() {
    std::cout << "AMateria default constructor called.\n";
}

AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << "AMateria parameterized constructor called.\n";
}

AMateria::AMateria(const AMateria &other) : _type(other._type) {
    std::cout << "AMateria copy constructor called.\n";
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called.\n";
}

AMateria &AMateria::operator=(const AMateria &other) {
    std::cout << "AMateria assignment operator called.\n";
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

std::string const &AMateria::getType() const {
    return this->_type;
}

// void AMateria::use(ICharacter &target) {};