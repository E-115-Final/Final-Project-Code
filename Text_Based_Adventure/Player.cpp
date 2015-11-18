/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.cpp
 * Author: Clayton
 * 
 * Created on November 13, 2015, 8:57 PM
 */

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
}
//void Player::attack(Enemy* e)
//{
    //e->currenthealth-=damage;
//}
