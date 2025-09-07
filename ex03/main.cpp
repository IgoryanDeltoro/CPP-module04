#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    // Ice i;
    // std::cout << "&i : " << &i << std::endl;

    // Cure c;
    // AMateria *ptr1;
    // AMateria *ptr2;

    // ptr1 = &i;
    // ptr2 = &c;

    // std::cout << "ptr1 adress: " << &ptr1 << std::endl;
    // std::cout << "ptr2 adress: " << &ptr2 << std::endl;
    // std::cout << "ptr1: " << ptr1->getType() << std::endl;
    // std::cout << "ptr2: " << ptr2->getType() << std::endl;

    // AMateria *clone1 = ptr1->clone();
    // AMateria *clone2 = ptr2->clone();

    // std::cout << "clone1 adress: " << clone1 << std::endl;
    // std::cout << "clone2 adress: " << clone2 << std::endl;
    // std::cout << "clone1: " << clone1->getType() << std::endl;
    // std::cout << "clone2: " << clone2->getType() << std::endl;

    // delete clone1;
    // delete clone2;

    {

        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter *me = new Character("me");
        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter *bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    return 0;
}