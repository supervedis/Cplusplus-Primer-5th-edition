/*
 *Exercise 3.44: Rewrite the programs from the previous exercises using a type alias for the type of the loop control variables.
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

    using int_array = int[4];
    for (int_array *p = ia; p != ia + 3; p++)
    {
        for (int *q = *p, *r = q; q != r + 4; q++)
        {
            cout << " " << *q;
        }
        cout << endl;
    }

    return 0;
}