#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    // array<int, 6> arr = {25, 27, 23, 31, 33, 35};
    // if (all_of(arr.begin(), arr.end(), [](int k) { return k % 2; }))
    //     cout << "All the array elements are odd" << endl;
    // else
    //     cout << "They are not odd";
    // return 0;

    // int ar[6] = {2,5,-7,-9,3,5};
    // all_of(ar,ar+6,[](int x){return x>0;})?
    // cout << "All elements are positive":
    // cout << "All elements are not positive";

    vector<int> ar = {2,3,4,5,6};
    all_of(ar.begin(), ar.end(), [](int x){return x>0;})?
    cout << "All elements are positive":
    cout << "All elements are not positive";
    return 0;
}