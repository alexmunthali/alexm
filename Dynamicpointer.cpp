#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() 
{
    int* number = new int; // allocating memory for an interger

    string* name = new string; // allocating memory for string 

    cout << "Enter an integer: "; // asking user to enter an interger
    cin >> *number;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter a string: "; // asking the user to enter a string
    getline(cin, *name);

    cout << "\n--- OUTPUT ---" << endl; // displaying the value
    cout << "The dynamically allocated integer is: "
         << *number << endl;

    cout << "The dynamically allocated string is: "
         << *name << endl;

    // now releasing dynamically allocated memory
    delete number;
    delete name;

    return 0;
}