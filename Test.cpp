#include <iostream>
using namespace std;

int print(char i){
    cout << i<< endl;
}

int main(){
string a = "hello bitch";
int i = 0;
print(a.at(i));
print(a.at(++i));


    return 0;
}