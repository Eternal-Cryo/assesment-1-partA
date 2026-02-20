#include <iostream>
using namespace std;
#include <string>
//You are to make a function that calculates hit accuracy in an FPS.Your function will take two integer arguments, (number of hits, and number of shots fired) and return an int(rounded down) to represent the accuracy, as a percentage from 0 to 100.
//Do NOT use any built - in rounding or math functions.
//Use an assert() to confirm the number of hits isn’t greater than the number of shots fired and both are greater or equal to 0.
//Commit this to version control.
//Add an int main() function.Add five asserts() to check your function works by passing the following Arguments to your function, and checking the result against the table's Expected Result.
//Arguments 	Expected Result
//3, 4 	=75
//1, 2 =	50
//13, 13 	=100
//21, 173 =	12
//0, 0 =	0
//Ensure all asserts() pass when you build and run.
//Commit this to version control.


//int main()
//{	
//		//used to recite the infomation the player gives
//		int percent = 0;
//		float hit = 0;
//		float totalfired = 0;
//		string userInput = "";
//		
// 
//		//a simple while loop to keep the sample repeating until the player wants to go
//		while (userInput != "exit")
//		{
//
//			//grabbing the infomation from the player on their accuracy
//			cout << "how many did you get on target?" << endl;
//			cin >> hit;
//			cout << "how many did you fire?" << endl;
//			cin >> totalfired;
//
//			//to see if they fired any shost rounds
//			if (hit > totalfired)
//			{
//				cout << "it doesn't work like that." << endl;
//
//
//			}
//			//to see if the player fire nothing or somehow brang a round back into the rifle
//			else if (totalfired <= 0)
//			{
//
//				cout << "your accuracy is 0%" << endl;
//			}
//
//
//
//			//if both numbers are acceptible run this
//			else if (totalfired > 0)
//			{
//				//using floats allows us to divide the two given numbers 
//				//then timesing by 100 gets us a percentage with decimals 
//				//the percent is an int so itll only accept whole numbers 
//				percent = ((hit / totalfired) * 100);
//
//
//				cout << "your accuracy is " << percent << "%" << endl;
//
//
//			}
//
//			// to keep the loop going or to stop it
//			cout << "would you like to go again?" << endl;
//			cin >> userInput;
//		}
//		
//	cout << "--------- end of code---------" << endl;
//}