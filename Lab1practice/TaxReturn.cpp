#include <iostream>
#include <string>
using namespace std;

double taxDue(double taxableIncome);

int main()
{
    // THIS MAIN FUNCTION ALLOWS YOU TO TEST YOUR CODE
    cout << taxDue(5000) << endl;  // 0 expected
    cout << taxDue(10000) << endl; // 70 expected
    cout << taxDue(25000) << endl; // 1120 expected
    cout << taxDue(30000) << endl; // 1870 expected
    cout << taxDue(50000) << endl; // 4870 expected
    cout << taxDue(55000) << endl; // 6120 expected
    cout << taxDue(75000) << endl; // 11120 expected
    cout << taxDue(85000) << endl; // 14620 expected
}

// COMPLETE THE FOLLOWING FUNCTION & PASTE IN QUESTION EDITOR
double taxDue(double taxableIncome)
{
    double taxDue = 0;

    if (taxableIncome < 9000)
    {
        return 0;
    }
    else if (taxableIncome < 25000)
    {
        taxDue = (taxableIncome - 25000) * 0.07;
    }
    else if (taxableIncome < 50000)
    { // DUDA
        taxDue = ((taxableIncome - 50000) * 0.15) + 1120;
    }
    else if (taxableIncome < 75000)
    {
        taxDue = ((taxableIncome - 50000) * 0.25) + 4870;
    }
    else
    {
        taxDue = (taxableIncome - 75000) * 0.35;
       
    }
 return taxDue;
    // Variables
    // Add variables here

    // Calculations
    // Add your calculation logic here
}
