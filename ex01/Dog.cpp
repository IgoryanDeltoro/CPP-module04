#include "Dog.hpp"

Dog::Dog() : Animal() {
    std::cout << "Dog default constructor called.\n";
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor called.\n";
    this->_brain = new Brain(*other._brain);
}

Dog::~Dog() {
    std::cout << "Dog destructor called.\n ";
    delete this->_brain;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called.\n ";
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "A dog: bark, bark!\n";
}

void Dog::setBrainIdea(const std::string &idia, int idx) {
    this->_brain->setBrainIdea(idia, idx);
}

std::string Dog::getBrainIdea(int idx) {
    return this->_brain->getBrainIdea(idx);
}