#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> x = {1,2,3,6,4,5,6,7,6,6,6,6,6};
    cout << x.size() << endl;
    cout << x.count(8) << endl;
    // if its present or not

    return 0;
}