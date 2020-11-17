#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
bool abc(int b){
    return b < 0;
}

int main()
{
    // array<int, 6> arr = {22, 27, 29, 31, 33, 35};
    // if (none_of(arr.begin(), arr.end(), [](int k) { return k % 2 == 0; }))
    //     cout << "None of the elements are divisible by 2";
    // else
    //     cout << "Atleast there is one element divisible by 2";
    // return 0;

    int ar[] = {2,4,6,8,12,0};
    int p = sizeof(ar)/sizeof(ar[0]);
    cout << "Array";
    for(int k = 0; k < p; k++)
    cout << " " << ar[k];
    if(none_of(ar, ar+p, abc))
    cout << "None of the elements in the range are negative";
    else cout << "The range has at least one element that is negative";

    return 0;

}