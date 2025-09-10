#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
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

        std::cout << "\n--- USE before unequip ---" << std::endl;
        me->use(0, *bob); // ice
        me->use(1, *bob); // cure

        std::cout << "\n--- UNEQUIP slot 0 ---" << std::endl;
        me->unequip(0); // ice should go to _floor, not deleted

        std::cout << "\n--- USE after unequip slot 0 ---" << std::endl;
        me->use(0, *bob); // nothing happens (slot empty)
        me->use(1, *bob); // cure still works

        std::cout << "\n--- UNEQUIP slot 1 ---" << std::endl;
        me->unequip(1); // cure goes to _floor

        std::cout << "\n--- USE after unequip slot 1 ---" << std::endl;
        me->use(1, *bob); // nothing happens

        delete bob;
        delete me; // here destructor of Character will delete inventory + _floor
        delete src;
    }
    return 0;
}