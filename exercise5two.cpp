#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    
    std::srand(std::time(0));
    int daysUntilExpiration = std::rand() % 12; // 0 - 11

    if (daysUntilExpiration == 0) 
    {
        std::cout << "Your subscription has expired." << std::endl;
    } 

    else if (daysUntilExpiration == 1)
     {
        std::cout << "Your subscription expires within a day!" << std::endl;
        std::cout << "Renew now and save 20%!" << std::endl;
    } 

    else if (daysUntilExpiration <= 5) 
    {
        std::cout << "Your subscription expires in " << daysUntilExpiration << " days" << std::endl;
        std::cout << "Renew now and save 10%!" << std::endl;
    } 

    else if (daysUntilExpiration <= 10) 
    {
        std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
    } 

    else 
    {
        std::cout << "You have an active subscription." << std::endl;
    }
    return 0;
}
