#include <iostream>
#include <set>
#include <map>
#include <stack>

using namespace std;

int main()
{
    // stack<int> newstack;
    // newstack.push(24);
    // newstack.push(80);
    // newstack.top() += 20;
    // cout << "newstack.top() is modified to " << newstack.top();

    int result = 0;
    stack<int> newstack;
    newstack.push(2);
    newstack.push(7);
    newstack.push(4);
    newstack.push(5);
    newstack.push(3);

    while (!newstack.empty())
    {
        result += newstack.top();
        newstack.pop();
    }
    cout << result;
    return 0;
}