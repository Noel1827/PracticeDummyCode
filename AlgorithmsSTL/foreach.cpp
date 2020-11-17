#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
void newfunction(int k)
{
    std::cout << " " << k;
}
void printx1(int b)  
{  
    cout << b * 2 << " ";  
}  
struct Class1  
{  
    void operator() (int b)  
    {  
        cout << b * 3 << " ";  
    }  
} obj1;  
int main()
{
    // vector<int> newvector;
    // newvector.push_back(50);
    // newvector.push_back(100);
    // newvector.push_back(150);
    // cout << "new vector contains \n";
    // for_each(newvector.begin(), newvector.end(), newfunction);
    // cout << "\n newvector contains \n";
    // for_each(newvector.begin(), newvector.end(), newfunction);

    int ar[5] = {6, 7, 8, 9, 10};
    cout << "Using Arrays: " << endl;
    cout << "Multiple of 2 elements are : ";
    for_each(ar, ar + 5, printx1);
    cout << endl;
    cout << "Multiple of 3 of elements are : ";
    for_each(ar, ar + 5, obj1);
    cout << endl;
    vector<int> ar1 = {2, 3, 5, 7, 1};
    cout << "Using Vectors:" << endl;
    cout << "Multiple of 2 elements are : ";
    for_each(ar1.begin(), ar1.end(), printx1);
    cout << endl;
    cout << "Multiple of 3 of elements are : ";
    for_each(ar1.begin(), ar1.end(), obj1);
    cout << endl;

    return 0;
}