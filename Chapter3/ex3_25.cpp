/*
 *Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104)
 *using iterators instead of subscripts.
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
    // count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    unsigned grade;
    while (cin >> grade)
    {                             // read the grades
        if (grade <= 100)         // handle only valid grades
            ++scores[grade / 10]; // increment the counter for the current cluster
    }

    for (auto it = scores.cbegin(); it != scores.cend(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}