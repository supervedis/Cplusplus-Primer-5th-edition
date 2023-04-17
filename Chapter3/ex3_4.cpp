/*
 * Exercise 3.4: Write a program to read two strings and report whether the
 * strings are equal. If not, report which of the two is larger. Now, change
 * the program to report whether the strings have the same length, and if
 * not, report which is longer.
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    string::size_type str1_len = str1.length();
    string strCompResult = str1 == str2 ? str1 + " is equal to " + str2 : (str1 < str2 ? str1 + " is smaller than " + str2 : str2 + " is larger than " + str1);
    string strLenCompResult = str1.length() == str2.length() ? str1 + " is the same length as " + str2 : (str1.length() < str2.length() ? str1 + " is shorter than " + str2 : str1 + " is longer than " + str2);
    cout << strCompResult << endl;
    cout << strLenCompResult << endl;
    return 0;
}