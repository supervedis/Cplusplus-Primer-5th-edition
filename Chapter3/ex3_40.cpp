/*
 *Exercise 3.40: Write a program to define two character arrays initialized
 *from string literals. Now define a third character array to hold the
 *concatenation of the two arrays. Use strcpy and strcat to copy the two
 *arrays into the third.
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
    char c1[] = "She sells sea";
    char c2[] = "shells at the sea show.";
    unsigned c1_size = sizeof c1 / sizeof(char);
    unsigned c2_size = sizeof c2 / sizeof(char);
    unsigned size = c1_size + c2_size + 1;
    char joined[size];
    strcpy(joined, c1);
    strcat(joined, " ");
    strcat(joined, c2);
    cout << joined << endl;
    return 0;
}