#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        // Ice(const std::string &type);
        ~Ice();

        AMateria *clone() const;
};

#endif