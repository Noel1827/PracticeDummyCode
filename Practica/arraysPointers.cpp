#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int vals[] = {4, 7, 11};
    cout << vals << endl;
    cout << *vals << endl;

    int *valptr = vals;
    cout << valptr << endl;
    cout << valptr[1] << endl;
    cout << *valptr << endl;
    cout << "SPACE" << endl;

    cout << *(valptr + 1) << endl; // access the next element of the array.
    cout << *(valptr + 2) << endl; // same here
    cout << *valptr + 1 << endl;   // first element of an array, the constant + 1. should be 5
    // same with the normal array name
    cout << "SPACE" << endl;
    cout << *(vals + 1) << endl; // second element of the array 7
    cout << *vals + 1 << endl;   //  first element of the array + 1
    return 0;
}
