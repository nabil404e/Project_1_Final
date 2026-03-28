#include <iostream>
#include "Warrior.h"
#include "Archer.h"
#include "Mage.h"
#include "Weapon.h"
#include "Potion.h"
#include "Shield.h"
using namespace std;

int main()
{
    char playAgain;
    do
    {
        int startChoice;
        cout << "====================================" << endl;
        cout << "Welcome to the RPG Battle Simulator!" << endl;
        cout << "====================================" << endl;
        cout << "1. Start Game\n2. Exit\nChoice: ";
        cin >> startChoice;
        cout << "====================================" << endl;
        if (startChoice != 1)
            break;

        int charChoice;
        cout << "Choose Hero:\n1.Warrior\n2.Archer\n3.Mage:\nChoice:";
        cin >> charChoice;
        cout << "====================================" << endl;

        Character *player = nullptr;
        Character *enemy = nullptr;

        if (charChoice == 1)
        {
            player = new Warrior("The Warrior");
            enemy = new Mage("Dark Mage Boss");
        }
        else if (charChoice == 2)
        {
            player = new Archer("The Archer");
            enemy = new Warrior("Evil Knight Boss");
        }
        else if (charChoice == 3)
        {
            player = new Mage("The Mage");
            enemy = new Archer("Shadow Archer Boss");
        }
        else
        {
            player = new Warrior("Hero");
            enemy = new Mage("Boss");
        }

        int weapChoice;
        cout << "Choose Weapon:\n1.Sword\n2.Staff\nChoice:";
        cin >> weapChoice;
        cout << "====================================" << endl;
        player->getInventory()->addItem(new Shield("Iron Shield", 5));
        if (weapChoice == 2)
            player->getInventory()->addItem(new Weapon("Magic Staff", 15));
        else
            player->getInventory()->addItem(new Weapon("Iron Sword", 10));

        player->getInventory()->addItem(new Potion());

        cout << "\n!!! Battle: " << player->getname() << " vs " << enemy->getname() << " !!!" << endl;

        while (player->gethealth() > 0 && enemy->gethealth() > 0)
        {
            int move;
            cout << "====================================" << endl;
            cout << "\n--- Your Turn ---\n1.Attack\n2.Special\n3.Open Inventory\nChoice: ";
            cin >> move;
            cout << "====================================" << endl;
            if (move == 1)
                player->basicAttack(enemy);
            else if (move == 2)
                player->specialAttack(enemy);
            else if (move == 3)
            {
                if (player->getInventory()->itemCount > 0)
                {
                    cout << "\n--- Your Inventory Items ---" << endl;
                    for (int i = 0; i < player->getInventory()->itemCount; i++)
                        cout << i + 1 << ". " << player->getInventory()->items[i]->itemname << endl;
                    int itemIdx;
                    cout << "Choose item number to use: ";
                    cin >> itemIdx;
                    if (itemIdx > 0 && itemIdx <= player->getInventory()->itemCount)
                        player->getInventory()->items[itemIdx - 1]->use(player);
                    else
                        cout << "Invalid choice!" << endl;
                }
                else
                    cout << "Inventory is empty!" << endl;
            }

            if (enemy->gethealth() > 0)
            {
                cout << "\n--- Enemy Turn (" << enemy->getname() << ") ---" << endl;
                if (enemy->gethealth() < 40)
                    enemy->specialAttack(player);
                else
                    enemy->basicAttack(player);
            }
        }

        if (player->gethealth() > 0)
            cout << "VICTORY! You defeated " << enemy->getname() << endl;
        else
            cout << "DEFEAT! " << enemy->getname() << " won." << endl;

        delete player;
        delete enemy;
        cout << "Play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    return 0;
}