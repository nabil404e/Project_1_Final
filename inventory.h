#ifndef INVENTORY_H
#define INVENTORY_H
#include "Item.h"

class inventory {
public:
    Item *items[5];
    int itemCount;
    inventory();
    void addItem(Item *newItem);
};
#endif