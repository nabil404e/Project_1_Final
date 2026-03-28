#include "Mage.h"
Mage::Mage(string n) : Character(n, 80, 35, 2) {}
void Mage::specialAttack(Character *enemy) {
    cout << getname() << " casts FIREBALL!" << endl;
    enemy->takeDamage(50);
}