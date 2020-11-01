#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int num = 25;       // inicializo el numero normal
    int *intptr = &num; // declaro e inicializo un pointer

    cout << num << endl;
    cout << &num << endl;
    cout << intptr << endl;
    cout << *intptr << endl;
    *intptr = 24; // Cambio el valor del num pero primero necesito el dereference * al pointer para acceder al num.
    cout << *intptr << endl;
    cout << num << endl;

    return 0;
}