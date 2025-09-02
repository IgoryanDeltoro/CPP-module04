
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[34m"
#define MAGENTA "\e[35m"
#define CYAN "\e[36m"
#define WHITE "\e[37m"
#define RESET "\e[0m\n"

int main()
{
    {
        std::cout << GREEN << "\n\n /=/=/=/=/=/=/=/=/=/=/=/=/ Creating simple test /=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/= " << RESET;
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << GREEN << "\n=== End of simple test ===" << RESET;

        std::cout << RED << "\n";
        delete j;
        delete i;
        std::cout << RESET << "\n";
    }
    {
        std::cout << GREEN << "\n\n /=/=/=/=/=/=/=/=/=/=/=/=/ Creating heard test /=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/= " << RESET;

        const int arr_size = 10;

        Dog d1;
        d1.setBrainIdea("Chase the ball!", 0);
        d1.setBrainIdea("Eat snacks!", 1);

        Cat c1;
        c1.setBrainIdea("Climb the tree.", 0);
        c1.setBrainIdea("Scratch the sofa.", 1);

        std::cout << CYAN << "\nDog's idea[0]: " << d1.getBrainIdea(0) << std::endl;
        std::cout << "Dog's idea[1]: " << d1.getBrainIdea(1) << std::endl;
        std::cout << "Cat's idea[0]: " << c1.getBrainIdea(0) << std::endl;
        std::cout << "Cat's idea[1]: " << c1.getBrainIdea(1) << RESET;
        

        std::cout << GREEN << "\n=== Copy constructor test ===" << RESET;
        Dog d2(d1);
        std::cout << CYAN << "\nCopied dog's idea[0]: " << d2.getBrainIdea(0) << std::endl;
        std::cout << "Copied dog's idea[1]: " << d1.getBrainIdea(1) << RESET;

        std::cout << GREEN << "\n=== Assignment operator test ===" << RESET;
        Cat c2;
        c2 = c1;
        std::cout << CYAN << "\nAssigned cat's idea[0]: " << c2.getBrainIdea(0) << std::endl;
        std::cout << "Assigned cat's idea[1]: " << c2.getBrainIdea(0) << RESET;

        std::cout << GREEN << "\n=== Polymorphism test ===" << RESET;

        const Animal *animals[arr_size];
        for (int i = 0; i < arr_size; i++)
        {
            if (i < (arr_size / 2))
                animals[i] = new Dog(d2);
            else
                animals[i] = new Cat(c2);
        }

        for (int i = 0; i < arr_size; i++)
        {
            std::cout << YELLOW << "\n";
            animals[i]->makeSound();
            std::cout << RED << "\n";
            delete animals[i];
            std::cout << RESET << "\n";
        }
        std::cout << GREEN << "=== End of heard test ==="<< RED << std::endl;
    }
    std::cout << RESET;

    return 0;
}
