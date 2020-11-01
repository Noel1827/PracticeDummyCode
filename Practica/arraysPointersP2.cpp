#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int vals[] = {4, 7, 11};
    int *valptr = vals;
    // valptr++;
    // cout << *valptr << endl; // points to 7 vals[1]
    

     valptr+=2;
     cout << valptr -vals << endl; // el numero de ints de espacio between valptr y vals
    

    return 0;
}