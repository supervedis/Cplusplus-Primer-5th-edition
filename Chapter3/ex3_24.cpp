/*
 *Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.
 */
#include <iostream>
#include <vector>
#include <string>
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
    for (auto it = ints.begin(), it2 = ints.begin() + 1; it2 < ints.end(); it += 2, it2 += 2)
    {
        sum_adjacent_pair = *it + *it2;
        cout << sum_adjacent_pair << endl;
    }

    cout << endl;
    auto it = ints.begin(), it2 = ints.end() - 1;
    int sum_first_last_element;
    while (it <= it2)
    {
        sum_first_last_element = *it + *it2;
        cout << sum_first_last_element << endl;
        it++;
        it2--;
    }
    return 0;
}