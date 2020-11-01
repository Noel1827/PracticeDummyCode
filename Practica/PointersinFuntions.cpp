#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num1 = 2, num2 = -3;
    cout << num1 << " & " << num2 << endl;
    swap(&num1, &num2);
    cout << num1 << " & " << num2 << endl;
    return 0;
}