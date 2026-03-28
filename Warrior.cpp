#include "Warrior.h"
Warrior::Warrior(string n) : Character(n, 150, 20, 10) {}
void Warrior::specialAttack(Character *enemy) {
    cout << getname() << " uses SHIELD CRUSH!" << endl;
    enemy->takeDamage(40);
}