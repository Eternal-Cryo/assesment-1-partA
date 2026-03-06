#include <iostream>
using namespace std;
#include <string>
#include <cassert>

//You will write a function that takes an enum for a potion type and a Player struct and use a switch statement to apply the following effects.Your function should return the new altered Player.
//
//Player applyPotion(enum PotionType, Player player)
//
//enum PotionType = HEALTH, SPEED, STRENGTH, MAGIC
//
//	HEALTH : sets health to 100
//	SPEED : sets speed to 50, health reduced by 10, strength reduced by 10, magic set to 10
//	STRENGTH : sets speed to 25, health multiplied by 2, strength set to 200
//	MAGIC sets strength to 10, magic set to 100
//
//	struct Player { int health = 30; int speed = 10; int strength = 15; int magic = 30; };
//
//Commit this to version control.
//Add an int main().For each potion type, initialize a const Player test variable, pass it to your function, get the return value and set up asserts() to check the returned values.



//the player struct all things that can happen to the player all in this struct
struct player {

	//the base of the players stats
	int id;
	int health;
	int speed;
	int strength;
	int magic;
	
	
	//enums for calling apon each effect
	enum potion_types{
	// potion effects
	HEALTH, 
	SPEED, 
	STRENGTH, 
	MAGIC,

	// clearing any changes
	CLEAR	
	
	};
	
	
	
	// the reporting system to house all of the cases that could be called Upon 
	int player_Report(player& player, potion_types potion) {
		//depending on the case used it reads out the players number then the changed stat 
		switch (potion) 
		{
		case (potion_types::HEALTH):
			std::cout << "   ---report--- player  " << id << " health boost  " << health << endl;
			player.Health_potion(player);

			//just reports all the stats to the player to show all the stat changes and not just one 
			player.report(player);

			return 1;
			break;
		case (potion_types::SPEED):
			std::cout << "   ---report--- player  " << id << " speed boost: " << speed << endl;
			player.speed_potion(player);
			//reports 
			player.report(player);
			
			return 2;
			break;
		case (potion_types::STRENGTH):
			std::cout << "   ---report--- player  " << id << " strength boost " << strength << endl;
			player.strength_potion(player);
			//reports  
			player.report(player);
			return 3;
			break;
		
		case (potion_types::MAGIC):
			std::cout << "   ---report--- player  " << id << " magic boost " << magic << endl;
			player.magic_potion(player);
			//reports 
			player.report(player);

			return 4;
			break;
			
		case (potion_types::CLEAR):
			std::cout << "   ---report--- player  " << id << " potions clearing" << endl;
			player.clear_potion(player);
			//reports 
			player.report(player);
			
			return 0;
			break;

					
			
			

		}
	}
		
	




	//	HEALTH : sets health to 100
	//int function then calling apon the player struct
	void Health_potion(player) {
	 

		std::cout << "applying health potion " << endl;
		health = 100; // stat changes 

		
	};
	//	SPEED : sets speed to 50, health reduced by 10, strength reduced by 10, magic set to 10
	void speed_potion(player) {
		std::cout << "applying speed potion " << endl;
		
		//propper stat changes having it like this allows for multiple effects to be active at once 
		health -= 10;
		speed = 50;
		strength -= 10;
		magic = 10;


		
	};
	//	STRENGTH : sets speed to 25, health multiplied by 2, strength set to 200
	void strength_potion(player) {
		std::cout << "applying strength potion " << endl;
		health = (health * 2);
		speed = 25;
		strength = 200;
		

		

		
	};
	//	MAGIC sets strength to 10, magic set to 100
	void magic_potion(player) {
		std::cout << "applying magic potion " << endl;
		strength = 10;
		magic = 100;


		
		
		
	};
	//all this is doing is setting the stats back to the original state 
	void clear_potion(player) {
		std::cout << "cleared potion effects" << endl;
		health = 30;
		speed = 10;
		strength = 15;
		magic = 30;
		

		
	};
	//couts all of the stats 
	void report(player)
	{
		//just reports all the stats to the player to show all the stat changes and not just one 
		std::cout << "   ---report--- player  " << id << " current stats" << endl;
		std::cout << "player health " << health << endl;
		std::cout << "player speed " << speed << endl;
		std::cout << "player strength " << strength << endl;
		std::cout << "player magic " << magic << endl;
		std::cout << "--------------- " << endl;


	}

	

		


	
	



	

};



int main()
{
	// the players stats 
	player player01 = {0, 30, 10,  15, 30, };

	



	// giving the health potion then clearing it wont work if it doesnt return the correct number 
	assert(player01.player_Report(player01, player::HEALTH) == 1);
	assert(player01.player_Report(player01, player::CLEAR) == 0);
	
	// giving the speed potion then clearing it
	assert(player01.player_Report(player01, player::SPEED) == 2);
	assert(player01.player_Report(player01, player::CLEAR) == 0);
	
	// giving the strength  potion t hen clearing it
	assert(player01.player_Report(player01, player::STRENGTH) == 3);
	assert(player01.player_Report(player01, player::CLEAR) == 0);
	
	// giving the magic potion then  clearing it
	assert(player01.player_Report(player01, player::MAGIC) == 4);
	assert(player01.player_Report(player01, player::CLEAR) == 0);

	//applying one of each potion
		/*player01.player_Report(player01, player::HEALTH);
		player01.player_Report(player01, player::SPEED);
		player01.player_Report(player01, player::STRENGTH);
		player01.player_Report(player01, player::MAGIC);
*/

	std::cout << " thanks for playing " << endl;
	std::cout << "---------- end of code ----------" << endl;
}

