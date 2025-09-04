#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const std::string &type);
        // Ice(const Ice &oher);
        Ice &operator=(const Ice &oher);
        ~Ice();
        
        AMateria *clone() const;
};

#endif