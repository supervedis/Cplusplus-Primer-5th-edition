/*
 *Exercise 3.45: Rewrite the programs again, this time using auto.
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

    for (auto &i : ia)
    {
        for (auto j : i)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}