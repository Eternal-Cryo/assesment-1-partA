#include <iostream>
using namespace std;

// You are to make a function that finds and returns the smallest element of an int array.
    // Pass the array to the function as an argument.
    //    Commit this to version control.
    //    Add an int main() function.Initialize the following array :
    //
    // 67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29
    //
    //    Add an assert() that your function returns ‘2’ using this array.
    //    Ensure all asserts() pass when you build and run.
    //    Test and commit this to version control.


int main()
{

    
        
    // all numbers given in an array
    int number_array[20]{ 67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29 };
    // keeping track of the smallest 
    int current_smallest = 0;
    //just to set the current smallest at the start
    int i = 0;

    current_smallest = number_array[i];

    // looping it for the amount of numbers given 
    for( i = 0; i < 20; i++)
    {
        // if it is smaller that the smallest current number
                if (number_array[i] <= current_smallest)
        {

             // reading out the array number 
            cout << "---------------------------------- " << endl;
            cout << "array current is " << number_array[i] << endl;


            // setting the smallest number from the array index
            current_smallest = number_array[i];
            cout << "the current smallest is " << current_smallest << endl;
            cout << "---------------------------------- " << endl;
        }

        // if it isn't smaller than the current smallest 
        else if (number_array[i] >= current_smallest)
        {

            // just saying that the number isn't smaller than the one that is set as the current smallest 
            cout << "---------------------------------- " << endl;
            cout << "array current  " << number_array[i] << endl;
            cout << "the current smallest is " << current_smallest << endl;
            cout << "---------------------------------- " << endl;
       }
            
    }
    //reciting the smallest number and ending the code
    cout << "the  smallest number was " << current_smallest << endl;
    cout << "--------- end of code---------" << endl;
    return 0;
}