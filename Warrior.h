#ifndef WARRIOR_H
#define WARRIOR_H
#include "Character.h"
class Warrior : public Character {
public: Warrior(string n); void specialAttack(Character *enemy) override; };
#endif