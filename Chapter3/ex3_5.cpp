/*
 * Exercise 3.5: Write a program to read strings from the standard input,
 * concatenating what is read into one large string. Print the concatenated
 * string. Next, change the program to separate adjacent input strings by a
 * space.
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    string joinedStrings = str1 + str2;
    cout << joinedStrings << endl;
    string separated_strings = str1 + " " + str2;
    cout << separated_strings << endl;
    return 0;
}