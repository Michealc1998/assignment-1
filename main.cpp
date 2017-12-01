/**
 * Micheál Carroll
 * C00218621
 * Exercise 1
 * Degrees celcius to fahrenheit
 */

 //Preprocessor directives
#include <iostream>

using namespace std;

//<main() function
int main(void)
{
    //Variable declarations
    double fah, cel;

    //Main heading / Name of program
    cout << "This is my degrees Celsius to Faherheit convertor\n\n" << endl;

    //read in values
    cout << "Enter a Value for degrees Celcius: ";
    cin >> cel;

    //calculate result with decimal values
    fah = ((9.0/5.0)*cel)+32;

    //Display result
    cout << "\nFahrenheit: " << fah << " Degrees (*F)" << endl;

    return 0;
}
