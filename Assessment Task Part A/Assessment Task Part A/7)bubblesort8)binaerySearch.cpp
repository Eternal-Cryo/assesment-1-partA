#include <iostream>
#include <string>
using namespace std;


//Bubble Sort
//
//Using the tutorials you will write a function that performs an ‘in - place’ bubble sort by passing an array of integers to it.Sort in ascending order(smallest to largest).You do not need to return any values from the function.
//You may NOT use any built - in sorting algorithms.
//Commit this to version control.
//Add an int main().Initialize this array and use your function to sort it.
//
//67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29
//
//Write code that loops through PAIRS of values in the sorted array and asserts() that the first value of the pair is always less than the second value of the pair.This will confirm your bubble sort works.
//Ensure all asserts() pass when you build and run.
//Test and commit this to version control.
/////////////////////////////////////////////////////////////////////////////////////////

//Binary Search
//
//USE THE SAME BUBBLE SORT PROJECT(#7) FOR THIS TASK ONCE THE SORT IS WORKING
//You will implement a function that searches a sorted array for a given value.Pass the target value and the array to your function and return the index where the value was found if it exists in the array.If it is not in the array return -1.
//You must implement binary search for this exercise.Do NOT implement linear search.Do NOT use any built - in library functions.
//Call your function from int main() after the bubble sort asserts() using the sorted array.
//Add the following asserts() to your main function to check your binary search works.
//(Your sorted array should look like this 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 43, 53, 61, 67, 71, 83, 89, 97)
//11 = 4
//23 = 8
//97 = 19
//88 = -1
//Enure all asserts() pass when you build and run.
//Commit this to version control.
//Write a loop that asks the user for a value and then calls your function to search for that value in the sorted array.
//If your function finds the value, tell the user at which index it found it, otherwise tell them the value was not in the array.
//Test and commit this to version control.
//		


int binary_search(int array[], int array_size, int user_number)
{
	int low_point = 0;
	int high_point = (array_size - 1);
	int mid_point = 0;

	


	while(low_point <= high_point)
	{

		mid_point = (low_point + high_point) / 2;

		if (user_number == array[mid_point])
		{
			return mid_point;

		}
		else if (user_number > array[mid_point])
		{
			low_point = mid_point + 1;

		}
		else if (user_number < array[mid_point])
		{

			high_point = mid_point - 1;

		}

	}
	return -1;
}












int main()
{
	//the array that is being used 
	int bubble_array[] = { 67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29 };
	
	//the array length
	int	array_length = 20;
	//controlling the iterations of the loop
	int i = 0;
	//to repeat the loop and reduce the amount of times it runs 
	//automaticly set to true
	bool swapped;

	

	// reading out the original array before it is sorted
	/*cout << "pre sorted array " << endl;
	for (int i = 0; i < array_length; i++)
	{
		cout << bubble_array[i] << " ";

	}
	cout << endl;*/



	
	// where the loop starts 
	do
	{
		
		swapped = false;


		for (int s = 0; s < array_length - 1 - i; s++)
		{



			
			if (bubble_array[s] > bubble_array[s + 1])
			{
				


				int temp_num = bubble_array[s];
				bubble_array[s] = bubble_array[s + 1];
				bubble_array[s + 1] = temp_num;
				swapped = true;


			}


			////uncomenting this reads out the loop and shows every change made even iff nothing happened  
			/*for (int j = 0; j < array_length; j++)
			{
				cout << bubble_array[j] << " ";

			}
			cout << endl;*/
			
//decreases the amount of loops that it goes through by 1 each time
		} i++;
		
		
		


		// uncomenting this one will read out the overall changes in each itteration 
		/*for (int i = 0; i < array_length; i++)
		{
			cout << bubble_array[i] << " ";

		}
		cout << endl;*/
 


	// to repeat the loop if something was swapped
	} while (swapped);
		
		
	
				// reading out the last changed array
				/*cout << " sorted array " << endl;
	
				for (int i = 0; i < array_length; i++)
				{  
						cout << bubble_array[i] << " ";

				}
				cout << endl;*/

				
	        /*Binary Search

			USE THE SAME BUBBLE SORT PROJECT(#7) FOR THIS TASK ONCE THE SORT IS WORKING
			You will implement a function that searches a sorted array for a given value.Pass the target value and the array to your function and return the index where the value was found if it exists in the array.If it is not in the array return -1.
			You must implement binary search for this exercise.Do NOT implement linear search.Do NOT use any built - in library functions.
			Call your function from int main() after the bubble sort asserts() using the sorted array.
			Add the following asserts() to your main function to check your binary search works.
			(Your sorted array should look like this 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 43, 53, 61, 67, 71, 83, 89, 97)
			11 = 4
			23 = 8
			97 = 19
			88 = -1
			Enure all asserts() pass when you build and run.
			Commit this to version control.

			Write a loop that asks the user for a value and then calls your function to search for that value in the sorted array.
			If your function finds the value, tell the user at which index it found it, otherwise tell them the value was not in the array.
			Test and commit this to version control.
			*/


	string user_input = " ";
	int user_number = 0;

	
	
	



		while (user_input != "exit")	
		{		
			
			cout << "give me a number to find in the array " << endl;
			cin >> user_number;




			int result = binary_search(bubble_array, 20, user_number);

			if (result >= 0)
			{
				cout << result << endl;
				cout << "the number " << user_number << " is in the array at index value " << result << endl;


			}
			else
			{
				cout << result << endl;
				cout << user_number << " the number isnt in the array" << endl;
			}





			cout << "want to go again " << endl;
			cin >> user_input;


		}

			



	
		











	cout << "---------- end of code ----------" << endl;
}