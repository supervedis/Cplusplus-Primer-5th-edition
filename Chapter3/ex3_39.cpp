/*
 *Exercise 3.39: Write a program to compare two strings. Now write a
 *program to compare the values of two C-style character strings.
 */
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main(void)
{
    char c1[] = "She sells sea shells at the sea show";
    char c2[] = "She sells sea shells at the sea show";
    int is_greater = strcmp(c1, c2);
    if (is_greater == 0)
        cout << "c1 is equal to c2" << endl;
    else if (is_greater < 0)
        cout << "c1 is less than c2" << endl;
    else
        cout << "c1 is greater than c2" << endl;

    string str1 = "She sells sea shells at the sea show";
    string str2 = "She sells sea shells at the sea show";
    if (str1 == str2)
        cout << "str1 is equal to str2" << endl;
    else if (str1 < str2)
        cout << "str1 is less than str2" << endl;
    else
        cout << "str1 is greater than str2" << endl;
    return 0;
}