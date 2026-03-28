#ifndef POTION_H
#define POTION_H
#include "Item.h"
class Potion : public Item {
public:
    Potion() : Item("Health Potion", 30) {}
    void use(Character *owner) override;
};
#endif