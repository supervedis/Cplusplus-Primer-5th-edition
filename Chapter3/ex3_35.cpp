/*
 *Exercise 3.35: Using pointers, write a program to set the elements in an
 *array to zero.
 */
#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    int ints[10];
    unsigned size = sizeof ints / sizeof(int);
    int *end = &ints[size];
    for (int *beg = ints; beg != end; beg++)
    {
        *beg = 0;
    }
    return 0;
}