
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main () {
    {
        std::cout << "\n========== Polymorphism Test ==========\n";

        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        std::cout << meta->getType() << " " << std::endl;

        j->makeSound();
        i->makeSound();
        meta->makeSound();

        std::cout << "\n========== End of Tests ==========\n";

        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << "\n\n\n========== Wrong Polymorphism Test ==========\n";

        const WrongAnimal *animal = new WrongAnimal();
        const WrongAnimal *cat = new WrongCat();

        std::cout << cat->getType() << " " << std::endl;
        std::cout << animal->getType() << " " << std::endl;

        cat->makeSound();
        animal->makeSound();

        std::cout << "\n========== End of Tests ==========\n";

        delete animal;
        delete cat;
    }
    std::cout << "\n\n==================================\n\n";

    return 0;
}
