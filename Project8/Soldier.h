#pragma once
#include"Creature.h"
class Soldier : Creature
{
private:
	unsigned int magazine_of_22LR, magazine_of_30carbine, magazine_of_762x39mm, magazine_of_556, magazine_of_9mm, magazine_of_45ACP,smoke_gra,fuse_gra,morale,rangeofcommunication, rangeofcommunication_radio;
	float value_stamina, stamina_lose_value, height, miss_chance, morale_value, morale_lose_value, adapt_value, adapt_rate;//adapt_value which in over time become more biggers
	//std::vector<Weapons> weapons;
	// Weapons OnHand;
	bool Iscrouching, IsCrawling, IsShellShocked, IsSuppressed, OpenFire;
public:
	void Update_Status_Motion()
	{
		if (Iscrouching == true)
		{
			Creature::SetSpeed(10);
			height /= 2;
			stamina_lose_value = 5;
		}
		if (IsCrawling == true)
		{
			Creature::SetSpeed(2);
			height /= 4;
			stamina_lose_value = 10;
		}
	}
	void Update_Status_Injured()
	{
		if (IsShellShocked == true)
		{
			Creature::SetSpeed(2);
			//FogOfWar::SetFov(30);
			value_stamina /= 2;
			OpenFire = false;
			miss_chance += 45;
			stamina_lose_value += 0.3;
			rangeofcommunication = 3;
			morale_value -= 30 * morale_lose_value * adapt_value;
			morale_lose_value += 0.3;
			adapt_rate += 0.5;
		}
		if (IsSuppressed == true)
		{
			Creature::SetSpeed(2);
			value_stamina /= 1.5;
			miss_chance += 65;
			stamina_lose_value += 0.1;
			rangeofcommunication -= 15;
			morale_value -= 10 * morale_lose_value * adapt_value;
			morale_lose_value += 0.1;
			adapt_rate += 1.5;
		}
	}
	void OpenFire_At_Target_S(Soldier Enemy)
	{
		if (OpenFire == true && OnHand.ammo)
		{

		}
		else
		{
			
		}
	}
};

