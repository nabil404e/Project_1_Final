#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;

class Character;

class Item {
public:
    string itemname;
    int power;
    Item(string name, int p = 0) : itemname(name), power(p) {}
    virtual void use(Character *owner) = 0;
    virtual ~Item() {}
};
#endif