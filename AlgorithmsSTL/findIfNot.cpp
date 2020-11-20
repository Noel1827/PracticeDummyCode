#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
bool isEven(int i)
{
    return ((i % 2) == 0);
}

int main()
{

    // array<int,6> a = {6,7,8,9,10};
    // array<int,6>::iterator ti = find_if_not(a.begin(), a.end(), [](int k){return k%2 == 0;});

    // cout << "IN the range given the very first not even value is " << *ti << "\n";

    std::vector<int> newvector{21, 35, 50, 65};
    std::vector<int>::iterator ti;
    ti = find_if(newvector.begin(), newvector.end(), isEven);
    cout << "Out of the given elements, first element even is " << *ti << "\n";
    cout << "At the position " << ti-newvector.begin()  << "\n";
    vector<int>::iterator tie;
    tie = find_if_not(newvector.begin(), newvector.end(), isEven);
    cout << "Out of the given elements, first odd element is " << *tie << "\n";
    cout << "At the position: " << tie-newvector.begin()  << "\n";

    return 0;
}