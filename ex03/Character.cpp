#include "Character.hpp"

void defaultInitializer(AMateria **inventory) {
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
}

Character::Character() : _name() {
    defaultInitializer(_inventory);
}

Character::Character(const std::string &name) : _name(name) {
    defaultInitializer(_inventory);
}

Character::Character(const Character &other) :_name(other._name) {
    std::cout << "Character copy constructor called.\n";
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i]) {
            if (this->_inventory[i]) {
                this->_inventory[i] = this->_inventory[i]->clone();
                delete this->_inventory[i];
            }
            this->_inventory[i] = other._inventory[i];
        }
    }
}
// Character &operator=(const Character &other);
Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
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
        if (this->_inventory[idx])
            this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 3) {
        if (this->_inventory[idx])
            this->_inventory[idx]->use(target);
    }
}
