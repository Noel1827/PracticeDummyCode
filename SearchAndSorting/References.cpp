#include<iostream>
using namespace std;

void test(int &x){
    x += 10;
}
void ptrr(int *x){
    *x += 10;
}
int main ()
{
int x = 0;
test(x);
cout << x << endl;
}