#include "Player.h"
#include "Character.h"

class Player : public Character
{
	bool CanAttackMonster = true;
	int HP = 100;
	int MP = 100;
};