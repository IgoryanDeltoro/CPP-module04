#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure default constructor called.\n";
}

// Cure::Cure(const std::string &type) : AMateria(type) {
//     std::cout << "Cure parameterized constructor called.\n";
//     // this->_type = "cure";
// }

Cure::~Cure() {
    std::cout << "Cure destructor called.\n";
}

AMateria *Cure::clone() const {
    return new Cure(*this);
}