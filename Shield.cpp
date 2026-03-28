#include "Shield.h"
#include "Character.h"

Shield::Shield(string name, int d) : Item(name, d) {}

void Shield::use(Character *owner) {
    owner->addDefense(this->power);
    cout << itemname << " equipped! Defense increased by " << power << endl;
}