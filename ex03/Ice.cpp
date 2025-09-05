#include "Ice.hpp"

Ice::Ice() : AMateria() {
    std::cout << "Ice default constructor called.\n";
    this->_type = "ice";
}

Ice::Ice(const std::string &type) : AMateria(type) {
    std::cout << "Ice parameterized constructor called.\n";
}

Ice::Ice(const Ice &other) : AMateria(other) {
    std::cout << "Ice copy constructor called.\n";
}

Ice &Ice::operator = (const Ice &other) {
    std::cout << "Ice assignment operator called.\n";
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Ice::~Ice() {
    std::cout << "Ice destructor called.\n";
}

AMateria *Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}