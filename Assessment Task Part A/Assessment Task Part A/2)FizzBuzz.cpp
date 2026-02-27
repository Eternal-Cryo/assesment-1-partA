#include <iostream>
#include <string>
using namespace std;


//You are to make a function that returns the FizzBuzz string for any given input integer.An integer will return “Fizz” if the number is a multiple of 3. 
// It will return “Buzz” if it’s a multiple of 5. It will return “FizzBuzz” if it’s a multiple of 3 AND 5. 
// Otherwise it will return the input number converted to a string.You can use std::to_string() or equivalent for this assessment.
//Commit this to version control.
//Add an int main() function and add four asserts() to check your function works.
//One for the value of 7 “7”,
//one for 3, “Fizz”,
//one for 5, “Buzz”
//and one for 15, “FizzBuzz”.
//Ensure all asserts() pass when you build and run.
//Commit this to version control.
//Make a loop in main() after your asserts(), and call your function with values of 1 to 20 and output the result to the console.
//Ensure all asserts() pass when you build and run.
//Test and commit this to version control.


//fizzbuzz void function using the number that the player gives 
void fizzBuzz(int playerNumber)
{
	//checking if its within 1-20 only requires the above zero if you want to use numbers higher than 20
	if ((playerNumber < 20) && (playerNumber > 0))
	{// this statment checks if the number can be divisable by 3 and 5 and the result is a whole nuber 
	// %3 == 0 checks to see if the number is divisible by the %


		// if statment checking if the number can be divided my 3 and 5
		if ((playerNumber % 3 == 0) && (playerNumber % 5 == 0))
		{


			cout << playerNumber << " is divisible by both 5 and 3 " << "fizzbuzz!" << endl;

		}
		//divisible by 5
		else if (playerNumber % 5 == 0)
		{
			cout << playerNumber << " is divisible by  5 " << "buzz!" << endl;

		}
		//divisible by 3
		else if (playerNumber % 3 == 0)
		{
			cout << playerNumber << " is divisible by  3 " << "fizz!" << endl;

		}
		//if not divisible by any
		else if (playerNumber)
		{
			cout << playerNumber << " is not divisible by 3 or 5" << endl;

		}

	}
	// if the number isnt between 1-20 remove the first part if you want to use numbers above 20
	else if ((playerNumber > 20) || (playerNumber < 0))
	{
		cout << "thats not a number within 1-20" << endl << "-----------------------------------------------" << endl;

	}





}









int main()			
{
	// just to get the players number 
	int player_number = 0;
	string exit = "";

	// while loop to loop until exit
		while  (exit != "exit")

		{ // getting a number from the player due not it doesnt like anything but numbers
		cout << "input a number from 1-20" << endl;
		cin >> player_number;


		//calling the funtion and giving it the number
		fizzBuzz(player_number);


		//asking if the player is ready to end program
		cout << "want to try another number or exit" << endl;
		cin >> exit;



	}
	
	
	 


	



	cout << "--------- end of code---------" << endl;
}








