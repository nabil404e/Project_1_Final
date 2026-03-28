#ifndef CHARACTER_H
#define CHARACTER_H
#include "inventory.h"

class Character {
private:
    string name;
    int health;
    int attackpower;
    int defense;
protected:
    inventory *myinventory;
public:
    Character(string a, int h, int ap, int d);
    virtual ~Character();
    string getname();
    int gethealth();
    void setHealth(int h);
    void addPower(int p);
    void addDefense(int d);
    void takeDamage(int damage);
    void basicAttack(Character *enemy);
    virtual void specialAttack(Character *enemy) = 0;
    inventory *getInventory();
};
#endif