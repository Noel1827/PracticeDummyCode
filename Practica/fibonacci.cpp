#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int fibonacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextterm = 0;

    for (int i = 0; i < n - 1; i++)
    {
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    return nextterm;
}

int fibonacciNOel(int n)
{
    double Phi = ((1 + sqrt(5)) / 2);
    double phi = ((1 - sqrt(5)) / 2);

    int fibonacci = (pow(Phi,n)- pow(phi,n))/sqrt(5);
    return fibonacci;
}

int main()
{

    int a = 8;

    cout << fibonacciNOel(4);
    return 0;
}