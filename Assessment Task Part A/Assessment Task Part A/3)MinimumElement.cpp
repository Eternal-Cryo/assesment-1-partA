#include <iostream>
#include <cassert>
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


int smallest(int array[], int arraySize)
{   
    
    int i = 0;
    int current_smallest = 0;
    current_smallest = array[i];
   
 
        // looping it for the amount of numbers given 
    for ( i = 0; i < arraySize; i++)
    {   
        
        
        // if it is smaller that the smallest current number
        if (array[i] <= current_smallest)
        {

            // reading out the array number 
            std::cout << "---------------------------------- " << endl;
            std::cout << "array current is " << array[i] << endl;


            // setting the smallest number from the array index
            current_smallest = array[i];
            std::cout << "the current smallest is " << current_smallest << endl;
            std::cout << "---------------------------------- " << endl;
        }

        // if it isn't smaller than the current smallest 
        else if (array[i] >= current_smallest)
        {

            // just saying that the number isn't smaller than the one that is set as the current smallest 
            std::cout << "---------------------------------- " << endl;
            std::cout << "array current  " << array[i] << endl;
            std::cout << "the current smallest is " << current_smallest << endl;
            std::cout << "---------------------------------- " << endl;
        }

    }


    //reciting the smallest number and ending the code
    std::cout << "the  smallest number was " << current_smallest << endl;
   return current_smallest;

}  













int main()
{

    
        
    // all numbers given in an array
    int number_array[]{ 67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29 };
    // keeping track of the smallest 
    
   

   assert(smallest(number_array, 20) == 2);
    smallest(number_array, 20);
    
    


   
    
    std::cout << "--------- end of code---------" << endl;
    return 0;
}