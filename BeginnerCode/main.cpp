#include <iostream>
using namespace std;

int main(){
    /*
     * Debugging practice. Start by pressing the debugging/run button in the left side panel (alternatively ctrl + shift + d or command + shift + d to open debug window).
     * Here you will monitor the value of the variable "number" as well as the output of each statement to the console.
     * To begin place a breakpoint in the line #10 of code and run debug with g++.exe
     * To go to the next line you will use F10 or the Step Over button in the debugging panel that shows on the top of the screen. 
     */
int i = 7;

if (isdigit(i)== i){
    cout << "True";
}
else cout << "False";
    
    return 0;
}