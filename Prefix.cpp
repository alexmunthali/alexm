#include <iostream>
using namespace std;
int main() 
{
int x = 3;
int y = ++x;
cout << "x:" << x << endl; // x will increase to 4
cout << "y:" << y << endl; // y will increase to 4
return 0;
}