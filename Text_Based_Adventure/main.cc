#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include "Enemy.h"
#include "Fight.h"
#include "main.h"
#include "Player.h"
using namespace std;
void intro()
{
    
    cin >> response;
    if(response == 1)
    {
        cout << "No save file ok. You've already caught on to the method of gameplay. To perform the desired action, type the number beforehand." << endl << "That's all you need to know, now go on a great text-based adventure!" << endl;
    }
    else if(response == 2)
    {
        cout << "No save file ok. You've already caught on to the method of gameplay. To perform the desired action, type the number beforehand." << endl << "That's all you need to know, now go on a great text-based adventure!" << endl;
    }
    else
    {
     cout << "No action corresponds with that number. Try again!" << endl;
     intro();
    }            
}
<<<<<<< HEAD

=======
void fight()
{
    cout << "You arrive in a grassy plain. A rat blocks your path. You must fight." << endl;
    battle = true; // battle happens so it becomes true
    player->reinitialize();
    enemy->reinitialize();
    while(battle) // fight happens until it becomes false
    {
        cout << "Battle stats:" << endl;
        cout << "Your health: " << player->currenthealth << "/" << player->health << endl;
        cout << "Enemy health " << enemy->currenthealth << "/" << enemy->health << endl;
        cout << "What will you do?" << endl << "1: Attack" << endl << "2: Do Nothing" << endl;
        cin >> response;
        switch(response)
            {
                case 1:
                    cout << "You attack! Rat takes " << player->damage << " damage!" << endl;
                    enemy->currenthealth-=player->damage;
                    if(enemy->currenthealth <= 0)
                    {
                        battle = 0;
                        victory = 1;
                    }
                    break;
                case 2:
                    cout << "You do nothing!" << endl;
                    break;
                default:
                    cout << "No action corresponds with that number. Try again!" << endl;
                    continue;
                    break;
            }
        cout << "Rat attacks you for " << enemy->damage << " damage!" << endl;
          enemy->attack(player);
        if(player->currenthealth <= 0)
        {
            battle = 0;
            victory = 0;
        }
    }
    if(victory)
    {
        cout << "U win gj, U get " << enemy->xp << " experience points!" << endl;
    }
    else
    {
        cout << "U lose gj." << endl;
    }
    return;
}
>>>>>>> parent of 84f19b2... Player can attack enemy
int main()
{
    cout << "Welcome to the Text Based Adventure Game! Do you have a saved game?" << endl;
    cout << "1: Yes" << endl << "2: No" << endl;
    intro();
    while(1)
    {
    //fight();
    }
}



