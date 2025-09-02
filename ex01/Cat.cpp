#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat default constructor called.\n";
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called.\n";
    this->_brain = new Brain(*other._brain);
}

Cat::~Cat() {
    std::cout << "Cat destructor called.\n ";
    delete _brain;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called.\n ";
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "A cat: meows, meows!\n";
}

void Cat::setBrainIdea(const std::string &idea, int idx) {
    _brain->setBrainIdea(idea, idx);
}

std::string Cat::getBrainIdea(int idx) {
    return _brain->getBrainIdea(idx);
}
