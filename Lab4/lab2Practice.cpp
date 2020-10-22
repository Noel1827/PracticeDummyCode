#include <iostream>
using namespace std;

void practiceCharMethods(char c);

int main()
{
    practiceCharMethods('f'); // Test with different characters
    practiceCharMethods('C');
    practiceCharMethods('7');
    practiceCharMethods('*');
    practiceCharMethods('c');

    return 0;
}

// ONLY COPY & PASTE THE FOLLOWING METHOD AS YOUR ANSWER
void practiceCharMethods(char character)
{
    cout << "***** Character Functions *****" << endl;
    // Add code to display the character that was provided as an argument
    cout << character << " character was passed in as an argument ";

    cout << "\nThe character entered was a C or c? ";
    // Add an if-else statement that displays "True" or "False"
    // in reponse to the above question.  DO NOT add "endl".
    // YOUR CODE BELOW -- Hint: Use a logical expresssion
    if (character == 'C' || character == 'c')
    {
        cout << "True";
    }
    else
        cout << "False";

    //Add a logical expression to answer the question below which returns 0 or 1
    cout << "\nIs the letter a C or c? "
         << ((character == 'C' || character == 'c') ? "1" : "0");

    cout << "\nIs it a lower-case letter? ";
    // Add an if-else statement that displays "True" or "False"
    if (character == tolower(character) && isalpha(character))
    {
        cout << "True";
    }
    else
        cout << "False";

    // Use the ternary operartor and a char library expresion to
    // anwser the question below with a "yes" or "no"
    cout << "\nIs it an upper-case letter? "
         << ((character == toupper(character) && isalpha(character)) ? "yes" : "no");

    cout << "\nIs it a digit? ";
    // Add an if-else statement that displays "True" or "False"
    // in response to the above question by using a char library function
    if (isdigit(character) == character && character != isalpha(character))
    {
        cout << "True";
    }

    else
        cout << "False";

    // Use the ternary operator with a char library expression to answer the question below
    cout << "\nIs it alphanumeric? "
         << ((isalnum(character)) ? "yes" : "no");

    cout << "\nThe opposite case (if applicable) is: ";
    // Add an if-else statement that uses a char library function
    // to display the opposite case of the user's input.
    if (character != isalnum(character))
    {
        if (character != toupper(character))
        {
            cout << static_cast<char>(toupper(character));
        }
        else
            cout << static_cast<char>(tolower(character));
    }
}
//  // Ternary Operator (similar to the above if-else statement)
//       int score = 75;
//       string outcome;
//       outcome = ((score > 70) ? "passed" : "try again") ;
//       cout << outcome << endl;