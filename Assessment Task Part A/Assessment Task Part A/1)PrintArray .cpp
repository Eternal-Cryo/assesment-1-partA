// Assessment Task Part A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;


//You are to make a function that takes an array of int.The function will step through each element and print it to the console.Put a comma after each element, but do NOT put a comma at the end.
//Commit this to version control.
//Add an int main() function.Use these values to initialize your array.Pass it to your function and run to check it works.
//
//3, 1, 4, 1, 5, 9, 2, 6, 5, 3







int main()
{
    //1) print array
    // numbers involved in the array
    int array_numbers[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    
    // looping for checking the arrays number
    for (int i = 0; i < 10; i++)
    {
               

            
        // the if statments cycling from 0-9     
        if (i == 9)
        {
                cout << array_numbers[i] << endl;
                

        }
        else if(i != 9)
        {
            cout << array_numbers[i] <<",";
        }

    }
    
   


    cout << " end of script" << endl;


}

