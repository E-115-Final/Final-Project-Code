#include "Player.h"
#include "Enemy.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>  
using namespace std;
void Player::reinitialize()
{
   health = 60;
   currenthealth = health;
   defense = 0;
   damage = rand() % 15 + 10;
<<<<<<< HEAD
}
=======
}
//void Player::attack(Enemy* e)
//{
//    e->currenthealth-=damage;
//}
>>>>>>> parent of 84f19b2... Player can attack enemy
