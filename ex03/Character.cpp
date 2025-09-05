#include "Character.hpp"

void null_setter(AMateria **inventory, int from, int to)
{
    if (from > to || from < 0 || to > 3)
        return;
    if (from == to) {
        inventory[from] = NULL;
    } else {
        while (from < to) {
            inventory[from] = NULL;
            from++;
        }
    }
}

Character::Character() {
    this->_name = "Default_name";
    null_setter(this->_inventory, 0, 4);
}

// Character(const std::string &name);
// Character(const Character &other);
// Character &operator=(const Character &other);
Character::~Character() {
    // for (int i = 0; i < 4; i++)
    // {
    //     if (this->_inventory[i])
    //     {
    //         delete this->_inventory[i];
    //         null_setter(_inventory, i, 4);
    //     }
    // }
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

// void unequip(int idx);
// void use(int idx, ICharacter &target);