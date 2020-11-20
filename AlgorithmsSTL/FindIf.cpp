#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
bool isAnOdd(int i)
{
    return ((i % 2) == 1);
}
bool isEven (int i)  
{  
    return((i%2)==0);  
}  

int main()
{
    // std::vector<int> newvector;
    // newvector.push_back(20);
    // newvector.push_back(35);
    // newvector.push_back(50);
    // newvector.push_back(65);
    // std::vector<int>::iterator ti = std::find_if(newvector.begin(), newvector.end(), isAnOdd);
    // cout << "Out of the given elements, first odd element is " << *ti << "\n";

  std::vector<int> newvector {20, 35, 50, 65};  
    std::vector<int>::iterator ti;  
    ti = find_if(newvector.begin(), newvector.end(), isEven);
    cout << "Out of the given elements, first even element is " << *ti << "\n";

    return 0;
}