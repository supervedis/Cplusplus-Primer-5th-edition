/*
 *Exercise 3.23: Write a program to create a vector with ten int elements.
 *Using an iterator, assign each element a value that is twice its current value.
 *Test your program by printing the vector.
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
    vector<int> ints{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = ints.begin(); it != ints.end(); it++)
    {
        *it = (*it) * 2;
    }

    for (auto it = ints.cbegin(); it != ints.cend(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}