/*
 *Exercise 3.32: Copy the array you defined in the previous exercise into
 *another array. Rewrite your program to use vectors.
 */
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(void)
{
    int ints[10];
    for (size_t i = 0; i < 10; i++)
    {
        ints[i] = i;
    }

    int ints2[10];
    for (auto i : ints)
    {
        ints2[i] = i;
    }

    vector<int> ivec(10);
    for (decltype(ivec.size()) i = 0; i < ivec.size(); i++)
    {
        ivec.push_back(i);
    }

    return 0;
}