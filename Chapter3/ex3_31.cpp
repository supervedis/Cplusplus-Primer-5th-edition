/*
 *Exercise 3.31: Write a program to define an array of ten ints. Give each
 *element the same value as its position in the array.
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int ints[10];
    for (size_t i = 0; i < 10; i++)
    {
        ints[i] = i;
    }

    return 0;
}