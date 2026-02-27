// Assessment Task Part A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;


//You are to make a function that takes an array of int.The function will step through each element and print it to the console.Put a comma after each element, but do NOT put a comma at the end.
//Commit this to version control.
//Add an int main() function.Use these values to initialize your array.Pass it to your function and run to check it works.
//
//3, 1, 4, 1, 5, 9, 2, 6, 5, 3



// a void funtion to be able that is able to read out any number array by giving it the array and the amount of numbers in the set 
void readArray(int array[], int arraySize) 
{
    for (int i = 0; i < arraySize; i++)
    {



        // the if statments cycling from 0-9     
        if (i == arraySize-1)
        {       //read out array index number 9 specificly
            cout << array[i] << endl;


        }
        //if it isnt index number 9
        else if (i != arraySize-1)
        {   // read out each indexs number and add a comma
            cout << array[i] << ",";
        }

    }


}





int main()
{
    //1) print array
    // numbers involved in the array
    int array_numbers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    
    
    //reading out the array
    readArray(array_numbers, 10);


    
   


    cout << " end of script" << endl;


}

