#include <iostream>
#include <string>

int main() 
{
    int value;
    bool valid = false;

    std::cout << "Enter an integer value between 5 and 10" << std::endl;

    while (!valid) 
    {
        if (!(std::cin >> value)) 
        {
            std::cout << "Sorry, you entered an invalid number, please try again" << std::endl;
            std::cin.clear(); 
            std::cin.ignore(10000, '\n');
        }
        else if (value < 5 || value > 10)
         {
            std::cout << "You entered " << value << ". Please enter a number between 5 and 10." << std::endl;
            std::cin.ignore(10000, '\n');
        }
        else 
        {
            valid = true;
        }
    }

    std::cout << "Your input value(" << value << ") has been accepted." << std::endl;

    return 0;
}
