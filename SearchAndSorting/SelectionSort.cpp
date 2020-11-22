#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int findSmallest(int[], int);

int main()
{

    int myarray[5] = {12, 45, 8, 15, 33};
    int smallest = myarray[0];
    int position;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <=4; j++)
        {
            if (smallest > myarray[j])
            {
                smallest = myarray[j];
                position = j;
            }
        }
        int temp = myarray[position];
        myarray[position] = myarray[i];
        myarray[i] = temp;
    }

    for(int i = 0; i < 5; i++){
        cout << myarray[i] << endl;
    }

    return 0;
}
