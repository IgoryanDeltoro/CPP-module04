#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    Cure(const std::string &type);
    Cure(const Cure &oher);
    Cure &operator=(const Cure &oher);
    ~Cure();

    AMateria *clone() const;
};

#endif