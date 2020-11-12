#include <iostream>
#include <set>
#include <map>
#include <stack>

using namespace std;

int main()
{

stack<int> newstack;
int sum = 0;
for(int j = 1; j <= 10; j++){
    newstack.push(j);
}

while(!newstack.empty()){
    sum+= newstack.top();
    newstack.pop();
}

cout << "Result is: " << sum;
    return 0;
}