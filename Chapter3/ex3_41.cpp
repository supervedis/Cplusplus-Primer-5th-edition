/*
 *Exercise 3.41: Write a program to initialize a vector from an array of
 *ints.
 */
#include <iostream>
#include <cctype>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::iterator;
using std::string;
using std::vector;
int main(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vnums(begin(nums), end(nums));
    return 0;
}