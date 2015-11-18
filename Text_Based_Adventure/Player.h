/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Clayton
 *
 * Created on November 13, 2015, 8:57 PM
 */

#ifndef PLAYER_H

#define PLAYER_H
//#include "Enemy.h"


class Player {
public:
  int xp;
  int health;
  int currenthealth;
  int defense;
  int damage;
  int level;
  void reinitialize();
 // void attack(Enemy* e);
  Player()
  {
   health = 60;
   currenthealth = health;
   defense = 0;
   damage = 1;
  };

};

#endif /* PLAYER_H */

