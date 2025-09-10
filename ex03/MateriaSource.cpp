#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "MateriaSource default constructor called.\n";
    for (int i = 0; i < 4; i++) {
        this->_storage[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    std::cout << "MateriaSource copy constructor called.\n";
    for (int i = 0; i < 4; i++) {
        if (other._storage[i])
            this->_storage[i] = other._storage[i]->clone();
        else 
            this->_storage[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    std::cout << "MateriaSource assignment operator called.\n";
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (this->_storage[i]) {
                delete this->_storage[i];
                this->_storage[i] = NULL;
            }
            if (other._storage[i])
                this->_storage[i] = other._storage[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource destructor called.\n";
    for (int i = 0; i < 4; i++) {
        delete this->_storage[i];
    }
}

void MateriaSource::learnMateria(AMateria *materia) {
    if (!materia) return;
    for (int i = 0; i < 4; i++) {
        if (!this->_storage[i]) {
            this->_storage[i] = materia->clone();
            delete materia;
            return;
        }
    }
    delete materia;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (this->_storage[i] && this->_storage[i]->getType() == type) {
            return this->_storage[i]->clone();
        }
    }
    return NULL;
}