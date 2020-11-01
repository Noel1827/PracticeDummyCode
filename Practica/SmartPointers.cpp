#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <memory>

using namespace std;
int main(){
    // SmartPointer UNIQUE POINTER
 unique_ptr<int> uptr(new int);
 *uptr = 5;

unique_ptr<int> uptr2;
uptr2 = move(uptr);
 cout << *uptr << endl;

    return 0; 

    // COULD NOT PRACTICE IT WELL, ITS NOT FOR CLASS
}