#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &other);
        ~Cat();
        Cat &operator=(const Cat &other);

        void makeSound() const;
        void setBrainIdea(const std::string &idea, int idx);
        std::string getBrainIdea(int idx);
};

#endif