#include <iostream>
#include <set>
#include <map>
#include <stack>


using namespace std;

int main()
{
    stack<int> newstack;
    for(int j = 0; j < 5; j++){
        newstack.push(j);
    }
    cout << "Popping the elements out of the stack??" << endl;
    while(!newstack.empty()){
        cout << newstack.top() << endl;
        newstack.pop();
    }


    return 0;
}