#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{

    //Buble sort

    int a[5] = {10, 2, 0, 43, 12};
    cout << "Input List" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++){
            if(a[i] > a[j]){
              int temp = a[j];
              a[j] = a[i];
              a[i] = temp;
            }
        }
    }
    cout << "Sorted elements" << endl; 
    for(int i = 0; i < 5; i++){
        cout << a[i] << endl;
    }

    return 0;
}