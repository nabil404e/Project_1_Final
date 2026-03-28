#ifndef SHIELD_H
#define SHIELD_H
#include "Item.h"

class Shield : public Item {
public:
    Shield(string name, int d);
    void use(Character *owner) override;
};
#endif