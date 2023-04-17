/*
 *Exercise 3.8: Rewrite the program in the first exercise, first using a while
 *and again using a traditional for loop. Which of the three approaches do
 *you prefer and why?
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string phrase = "Richard of York gave birth in vain.";
    cout << "String before change, traditional for loop: " << phrase << endl;
    for (string::size_type index = 0; index < phrase.length(); ++index)
    {
        phrase[index] = 'X';
    }
    cout << "String after change, traditional for loop: " << phrase << endl;

    phrase = "Richard of York gave birth in vain.";
    cout << "String before change, while loop: " << phrase << endl;
    string::size_type index = 0;
    while (index < phrase.length())
    {
        phrase[index++] = 'X';
    }
    cout << "String after change, while loop: " << phrase << endl;
    return 0;
}