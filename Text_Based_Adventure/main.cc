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



