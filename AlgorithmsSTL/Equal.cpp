#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>
using namespace std;
bool newPredicate(int m, int n)
{
    return m == n;
}

int main()
{

    //     int newints[] = {20, 40, 60, 80, 100};
    //     vector<int> newvector(newints, newints + 5);
    //     if (equal(newvector.begin(), newvector.end(), newints)){
    //         cout << "Both containers have equal elements" << endl;}
    //     else cout << "There is diference in the elements" << endl;

    //     newints[3] = 77;

    //     if (equal(newvector.begin(), newvector.end(), newints)){
    //         cout << "Both containers have equal elements" << endl;
    //     }else cout << "There is diference in the elements" << endl;

    int u1[] = {10, 20, 60, 40, 50};
    vector<int> vec_1(u1, u1 + 5);
    for (auto k = 0; k < vec_1.size(); k++)
    {
        cout << vec_1.at(k);
        cout << "\n";
    }
    u1[3] = 50;
    if (equal(vec_1.begin(), vec_1.end(), u1))
    {
        cout << "Both containers have equal elements" << endl;
    }
    else
        cout << "There is diference" << endl;

    return 0;
}