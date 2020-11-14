#include <iostream>
#include <vector>
using namespace std;
int vectorSumHelper(vector<int> v, int index)
{
    if (index >= v.size())
        return 0;
    else
        return v[index] + vectorSumHelper(v, index + 1);
}

int vectorSum(vector<int> v)
{
    return vectorSumHelper(v, 0);
}


int main()
{

    vector<int> v = {3, 2, 3, 5, 6};
    
    cout << vectorSum(v) << endl;

    return 0;
}