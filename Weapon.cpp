#include "Weapon.h"
#include "Character.h"
void Weapon::use(Character *owner) {
    owner->addPower(this->power);
    cout << itemname << " equipped! Power increased." << endl;
}