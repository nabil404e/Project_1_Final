#include "Potion.h"
#include "Character.h"
void Potion::use(Character *owner) {
    owner->setHealth(owner->gethealth() + 30);
    cout << "Used Health Potion! +30 HP." << endl;
}