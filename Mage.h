#ifndef MAGE_H
#define MAGE_H
#include "Character.h"
class Mage : public Character {
public: Mage(string n); void specialAttack(Character *enemy) override; };
#endif