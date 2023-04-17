/*
 *Exercise 3.42: Write a program to copy a vector of ints into an array of
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
    vector<int> primes{1, 3, 5, 7, 11, 13, 17};
    int a_primes[primes.size()];
    for (size_t i = 0; i < primes.size(); i++)
    {
        a_primes[i] = primes[i];
    }

    return 0;
}