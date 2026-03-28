#ifndef ARCHER_H
#define ARCHER_H
#include "Character.h"
class Archer : public Character {
public: Archer(string n); void specialAttack(Character *enemy) override; };
#endif