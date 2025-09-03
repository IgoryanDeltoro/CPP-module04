#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain *_brain;

    public:
        Dog();
        Dog(const Dog &other);
        ~Dog();
        Dog &operator=(const Dog &other);

        void makeSound() const;
        void setBrainIdea(const std::string &idia, int idx);
        std::string getBrainIdea(int idx);
};

#endif