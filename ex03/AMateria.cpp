#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << "AMateria parameterized constructor called.\n";
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called.\n";
}

std::string const &AMateria::getType() const {
    return this->_type;
}

// void AMateria::use(ICharacter &target) {};