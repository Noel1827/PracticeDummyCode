#include <iostream>
#include <set>
#include <map>
#include <stack>

using namespace std;

int main()
{
stack<int> newstack;
cout << "0.size: " << newstack.size() << "\n";

for(int j = 0; j < 5; j++)
    newstack.push(j);

    cout << "1.size: " << newstack.size() << "\n";

    newstack.pop();

    cout << "2.size: " << newstack.size();

    return 0;
}