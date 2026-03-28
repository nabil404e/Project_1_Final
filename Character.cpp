#include "Character.h"

Character::Character(string a, int h, int ap, int d) : name(a), health(h), attackpower(ap), defense(d)
{
    myinventory = new inventory();
}
Character::~Character() { delete myinventory; }
string Character::getname() { return name; }
int Character::gethealth() { return health; }
void Character::setHealth(int h) { health = (h < 0) ? 0 : h; }
void Character::addPower(int p) { attackpower += p; }
void Character::addDefense(int d)
{
    defense += d;
}
void Character::takeDamage(int damage)
{
    int realdamage = damage - defense;
    if (realdamage < 0)
        realdamage = 0;
    health -= realdamage;
    if (health < 0)
        health = 0;
    cout << name << " health now: " << health << endl;
}
void Character::basicAttack(Character *enemy)
{
    cout << name << " attacks " << enemy->getname() << "!" << endl;
    enemy->takeDamage(attackpower);
}
inventory *Character::getInventory() { return myinventory; }