#include <iostream>
using namespace std;
int main() 
{
int x = 3;
int y = x++;
cout << "x:" << x << endl; // x will be 4
cout << "y:" << y << endl; // y will be 3
return 0;
}