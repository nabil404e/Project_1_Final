#include "inventory.h"
inventory::inventory() : itemCount(0) {
    for (int i = 0; i < 5; i++) items[i] = nullptr;
}
void inventory::addItem(Item *newItem) {
    if (itemCount < 5) { items[itemCount] = newItem; itemCount++; }
}