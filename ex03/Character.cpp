#include "Character.hpp"

void defaultInitializer(AMateria **inventory) {
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
}

Character::Character() : _name() {
    std::cout << "Character default constructor called.\n";
    defaultInitializer(_inventory);
}

Character::Character(const std::string &name) : _name(name) {
    std::cout << "Character parameterized constructor called.\n";
    defaultInitializer(_inventory);
}

Character::Character(const Character &other) :_name(other._name) {
    std::cout << "Character copy constructor called.\n";
    for (int i = 0; i < 4; i++) {
        if (other._inventory[i]) 
            this->_inventory[i] = other._inventory[i]->clone();
        else    
            this->_inventory[i] = NULL;
        
    }
}

Character &Character::operator=(const Character &other) {
    std::cout << "Character assignment operator called.\n";
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (this->_inventory[i]) {
                delete this->_inventory[i];
                this->_inventory[i] = NULL;
            }
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();
        }
    }
    return *this;
}

Character::~Character() {
    std::cout << "Character destructor called.\n";
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i]) {
            delete this->_inventory[i];
        }
    }
    for (int i = 0; i < static_cast<int>(_floor.size()); i++) {
        delete _floor[i];
    }
}

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        if (this->_inventory[idx]) {
            this->_floor.push_back(this->_inventory[idx]);
            this->_inventory[idx] = NULL;
        }
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 3) {
        if (this->_inventory[idx])
            this->_inventory[idx]->use(target);
    }
}
