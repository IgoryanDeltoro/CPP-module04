#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << "The default constructor creates an animal.\n";
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << "The parameterized constructor creates an animal called <" << _type << ">.\n";
}

Animal::Animal(const Animal &other) : _type(other._type) {
    std::cout << "The copy constructor creates the copy of " << _type << ".\n";
}

Animal::~Animal(){
    std::cout << "Distructor killed " << _type << ".\n ";
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "The assignment operator create the deep copy of " << _type << ".\n ";
    if (this != &other)
        _type = other._type;
    *this;
}

void Animal::makeSound() {
    std::cout << _type << " create a lot type of sounds.\n";
};