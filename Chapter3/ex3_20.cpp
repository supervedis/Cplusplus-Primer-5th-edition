/*
 *Exercise 3.20: Read a set of integers into a vector. Print the sum of each
 *pair of adjacent elements. Change your program so that it prints the sum of
 *the first and last elements, followed by the sum of the second and second-to-
 *last, and so on.
 */
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(void)
{
    int n;
    vector<int> ints;
    while (cin >> n && n != 0)
    {
        ints.push_back(n);
    }

    int sum_adjacent_pair;
    for (decltype(ints.size()) i = 0, j = i + 1; j < ints.size(); i += 2, j += 2)
    {
        sum_adjacent_pair = ints[i] + ints[j];
        cout << sum_adjacent_pair << endl;
    }

    cout << endl;
    int i = 0, j = ints.size() - 1;
    int sum_first_last_element;
    while (i <= j)
    {
        sum_first_last_element = ints[i] + ints[j];
        cout << sum_first_last_element << endl;
        i++;
        j--;
    }

    return 0;
}