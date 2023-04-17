/*
 *Exercise 3.14: Write a program to read a sequence of ints from cin and
 *store those values in a vector.
 */

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    vector<int> sequence;
    int prime;
    while (cin >> prime)
    {
        sequence.push_back(prime);
    }

    return 0;
}