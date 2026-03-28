#include "Archer.h"
Archer::Archer(string n) : Character(n, 100, 15, 5) {}
void Archer::specialAttack(Character *enemy) {
    cout << getname() << " uses ARROW RAIN!" << endl;
    enemy->takeDamage(30);
}