/*
 *Exercise 3.6: Use a range for to change all the characters in a string to X.
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
    string changed_phrase;
    for (auto &c : phrase)
    {
        c = 'X';
    }
    cout << "String after change: " << phrase << endl;
    return 0;
}