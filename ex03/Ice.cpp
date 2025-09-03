#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice default constructor called.\n";
}

// Ice::Ice(const std::string &type) : AMateria(type) {
//     std::cout << "Ice parameterized constructor called.\n";
//     // this->_type = "ice";
// }

Ice::~Ice() {
    std::cout << "Ice destructor called.\n";
}

AMateria *Ice::clone() const {
    return new Ice(*this);
}
