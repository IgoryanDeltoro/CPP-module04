#include "Cure.hpp"

Cure::Cure() : AMateria() {
    std::cout << "Cure default constructor called.\n";
    this->_type = "cure";
}

Cure::Cure(const std::string &type) : AMateria(type) {
    std::cout << "Cure parameterized constructor called.\n";
}

Cure::Cure(const Cure &other) : AMateria(other) {
    std::cout << "Cure copy constructor called.\n";
}

Cure &Cure::operator=(const Cure &other) {
    std::cout << "Ice assignment operator called.\n";
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure() {
    std::cout << "Cure destructor called.\n";
}

AMateria *Cure::clone() const {
    return new Cure(*this);
}