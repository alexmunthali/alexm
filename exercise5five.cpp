#include <iostream>
using namespace std;

// These are functions for area
double calculateSquareArea(double side) 
{
    return side * side;}

double calculateRectangleArea(double length, double width)
 {
    return length * width;}

double calculateTriangleArea(double base, double height) 
{
    return 0.5 * base * height;}

int main()
 {
    int selection;
    while (true)
     {
        std::cout << "Please select the area of the shape to calculate" << std::endl;
        std::cout << "1. Square" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Triangle" << std::endl;
        std::cout << "4. Quit Program" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter selection: ";
        std::cin >> selection;

        if (std::cin.fail() || selection < 1 || selection > 4) 
        {
            if (!std::cin.fail()) 
            {
                std::cout << std::endl;
                std::cout << "Your input was: " << selection << " which is an invalid input" << std::endl;
                std::cout << "Please enter a valid input!!!" << std::endl;
                std::cout << std::endl;
            } 
            else
             {
                std::cout << std::endl;
                std::cout << "Your input was an invalid input" << std::endl;
                std::cout << "Please enter a valid input!!!" << std::endl;
                std::cout << std::endl;
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                continue;
            }
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (selection == 4)
         {
            break; 
        }

        if (selection == 1)
         {
            double side;
            std::cout << "Enter side length of square: ";
            std::cin >> side;
            std::cout << "Area of square is: " << calculateSquareArea(side) << std::endl << std::endl;
        }
        else if (selection == 2) 
        {
            double length, width;
            std::cout << "Enter length of rectangle: ";
            std::cin >> length;
            std::cout << "Enter width of rectangle: ";
            std::cin >> width;
            std::cout << "Area of rectangle is: " << calculateRectangleArea(length, width) << std::endl << std::endl;
        }
        else if (selection == 3) 
        {
            double base, height;
            std::cout << "Enter base of triangle: ";
            std::cin >> base;
            std::cout << "Enter height of triangle: ";
            std::cin >> height;
            std::cout << "Area of triangle is: " << calculateTriangleArea(base, height) << std::endl << std::endl;
        }
    }

    return 0;
}
