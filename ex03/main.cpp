#include "Ice.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main () {
    Ice i;
    Cure c;
    AMateria *ptr1;
    AMateria *ptr2;

    ptr1 = &i;
    ptr2 = &c;

    std::cout << "ptr1 adress: " << &ptr1 << std::endl;
    std::cout << "ptr2 adress: " << &ptr2 << std::endl;
    std::cout << "ptr1: " << ptr1->getType() << std::endl;
    std::cout << "ptr2: " << ptr2->getType() << std::endl;

    AMateria *clone1 = ptr1->clone();
    AMateria *clone2 = ptr2->clone();

    std::cout << "clone1 adress: " << clone1 << std::endl;
    std::cout << "clone2 adress: " << clone2 << std::endl;
    std::cout << "clone1: " << clone1->getType() << std::endl;
    std::cout << "clone2: " << clone2->getType() << std::endl;

    delete clone1;
    delete clone2;

    return 0;
}