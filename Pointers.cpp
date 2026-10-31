#include <iostream>
using namespace std;
int main()
 {
int firstVa1ue;
int secondVa1ue;
int * pPointer = nullptr;
pPointer = &firstVa1ue;
*pPointer = 10; // Indirection
pPointer = &secondVa1ue;
*pPointer = 20; // Indirection
cout <<"firstVa1ue is" << firstVa1ue << '\n';
cout << "secondVa1ue is " << secondVa1ue<< '\n'; 
return 0;
}