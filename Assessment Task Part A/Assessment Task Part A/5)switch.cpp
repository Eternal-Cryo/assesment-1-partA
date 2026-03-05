#include <iostream>
using namespace std;
#include <string>


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
	CLEAR,
	//reporting the stats
	REPORT,
	};
	
	
	
		
	




	//	HEALTH : sets health to 100
	//void function then calling apon the player struct
	void Health_potion(player) {
	 

		std::cout << "applying health potion " << endl;
		health = 100; // stat changes 

		//calls for the changes to the stats 
		player_Report(potion_types::HEALTH);
		//then calls for the stats 
		player_Report(potion_types::REPORT);

	};

//	SPEED : sets speed to 50, health reduced by 10, strength reduced by 10, magic set to 10
	void speed_potion(player) {
		std::cout << "applying speed potion " << endl;
		
		//propper stat changes having it like this allows for multiple effects to be active at once 
		health -= 10;
		speed = 50;
		strength -= 10;
		magic = 10;


		player_Report(potion_types::SPEED);
		player_Report(potion_types::REPORT);
	};

//	STRENGTH : sets speed to 25, health multiplied by 2, strength set to 200

	void strength_potion(player) {
		std::cout << "applying strength potion " << endl;
		health = (health * 2);
		speed = 25;
		strength = 200;
		

		player_Report(potion_types::STRENGTH);
		player_Report(potion_types::REPORT);
	};
	
	//	MAGIC sets strength to 10, magic set to 100
	void magic_potion(player) {
		std::cout << "applying magic potion " << endl;
		strength = 10;
		magic = 100;


		player_Report(potion_types::MAGIC);
		player_Report(potion_types::REPORT);
		
	};


	//all this is doing is setting the stats back to the original state 
	void clear_potion(player) {
		std::cout << "cleared potion effects" << endl;
		health = 30;
		speed = 10;
		strength = 15;
		magic = 30;
		player_Report(potion_types::CLEAR);
		player_Report(potion_types::REPORT);

	};

	
	

	

		


	
	// the reporting system to house all of the cases that could be called apon and mainly tells the player what has been used and what stat has been buffed the most 
	void player_Report(potion_types msg) {
		//depending on the case used it reads out the players number then the changed main stat 
		switch (msg) {
		case (potion_types::HEALTH):
			std::cout << "   ---report--- player  " << id << " health boost  " << health << endl;
			

			break;
		case (potion_types::SPEED):
			std::cout << "   ---report--- player  " << id << " speed boost: " << speed << endl;

			break;
		case (potion_types::STRENGTH):
			std::cout << "   ---report--- player  " << id << " strength boost " << strength << endl;

			break;
		
		case (potion_types::MAGIC):
			std::cout << "   ---report--- player  " << id << " magic boost " << magic << endl;

			break;
			
		case (potion_types::CLEAR):
			std::cout << "   ---report--- player  " << id << " potions clearing" << endl;

			break;

			//just reports all the stats to the player to show all the stat changes and not just one 
		case (potion_types::REPORT):
			std::cout << "   ---report--- player  " << id << " current stats" << endl;
			std::cout << "player health " << health << endl;
			std::cout << "player speed " << speed << endl;
			std::cout << "player strength " << strength << endl;
			std::cout << "player magic " << magic << endl;
			std::cout << "--------------- " << endl;
			break;

		}
	};
	



	

};



int main()
{
	// the players stats 
	player player01 = {0, 30, 10,  15, 30, };

	// giving the health potion then clearing it 
	player01.Health_potion(player01);
	player01.clear_potion(player01);

	// giving the speed potion then clearing it
	player01.speed_potion(player01);
	player01.clear_potion(player01);

	// giving the strength potion then clearing it
	player01.strength_potion(player01);
	player01.clear_potion(player01);

	// giving the magic potion then clearing it
	player01.magic_potion(player01);
	player01.clear_potion(player01);


	//applying one of each potion
	player01.Health_potion(player01);
	player01.speed_potion(player01);
	player01.strength_potion(player01);
	player01.magic_potion(player01);





	std::cout << " thanks for playing " << endl;
	std::cout << "---------- end of code ----------" << endl;
}

