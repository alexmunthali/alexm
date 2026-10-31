#include <iostream>
using namespace std;
int main() 
{
int numbersArray[5];
int * pPointer = nullptr;
pPointer = numbersArray; 
*pPointer = 10; // value assigned to first element
*pPointer = 20; // value assigned to first element
*pPointer = 30; // value assigned to third element

pPointer = numbersArray + 3;
*pPointer = 40; // value assigned to forth element

pPointer = numbersArray;
*(pPointer+4) = 50;
for (int n = 0; n < 5; n++)
{cout << numbersArray[n] << ",";
}
return 0;
}