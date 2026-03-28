#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"
class Weapon : public Item {
public:
    Weapon(string name, int p) : Item(name, p) {}
    void use(Character *owner) override;
};
#endif