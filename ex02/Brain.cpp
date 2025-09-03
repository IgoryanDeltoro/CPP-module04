#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called.\n";
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain copy constructor called.\n";
    for (int i = 0; i < ARR_SIZE; i++) {
        this->_ideas[i] = other._ideas[i];
    }
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain assignment operator called.\n";
    if (this != &other) {
        for (int i = 0; i < ARR_SIZE; i++) {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called.\n ";
}

std::string Brain::getBrainIdea(int idx) {
    if (idx >= 0 && idx < ARR_SIZE) {
        return _ideas[idx];
    }
    return "";
}

void Brain::setBrainIdea(const std::string &idea, int idx) {
    if (idx >= 0 && idx < ARR_SIZE) {
        _ideas[idx] = idea;
    }
}