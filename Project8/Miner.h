#pragma once
#include"Creature.h"
#include"GRID_MAIN_CHILD_UNDERGROUND.h"
class Miner : Creature, GRID_MAIN_CHILD_UNDERGROUND
{
private:
	unsigned int i_ore, i_gold, i_coal, i_uranus, i_diamonds, i_sulfur, i_salt, i_graphite, i_tin, i_copper_ore, oxygen; //its inv of miner where he can contain his res;
	bool HaveHighEdu;// like geology
	//class AreaWarehouse  WAREHOUSE_ID;
	// class Item 
	// class Clothes
public:
	//void Task_Mine(GRID_MAIN_UNDERGROUNDE TARGET_GRID)
	//{
	//	Creature::Move(TARGET_GRID.GetPosition());
	//	//Mine(&TARGET_GRID){}; там буде взаємоді відбуватися через 
	//	Creature::Move(To WAREHOUSE_ID.GetPosition());\
	// 	WAREHOUSE_ID.EXCHANGE();
	//}
	/*void Task_Set_Up_Bracing(GRID_MAIN_UNDERGROUNDE TARGET_GRID,GRID_MAIN_CHILD_BUILDING TARGET_GRID_BUILD)
	{
		Creature::Move(TARGET_GRID.GetPosition());
		TARGET_GRID_BUILD.IsBracing_Builted(true);
	}*/
	/*void SetWarehouse(AreaWarehouse NEW_WAREHOUSE_ID)
	{
		WAREHOUSE_ID = NEW_WAREHOUSE_ID;
	}*/
	/*void SetI_Res(unsigned int ore, unsigned int gold, coal)
	{
		ore
	}*/
	/*void SetJobPosition(Creature::SetGROUP_ID)
	{

	}*/
};

