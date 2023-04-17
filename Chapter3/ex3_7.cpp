/*
 *Exercise 3.7: What would happen if you define the loop control variable in
 *the previous exercise as type char? Predict the results and then change your
 *program to use a char to see if you were right.
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string phrase = "Richard of York gave birth in vain.";
    cout << "String before change: " << phrase << endl;
    for (char &c : phrase)
    {
        c = 'X';
    }
    cout << "String after change: " << phrase << endl;
    return 0;
}

// No difference even when the loop control variable is changed to type char.