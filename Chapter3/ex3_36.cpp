/*
 *Exercise 3.36: Write a program to compare two arrays for equality. Write a
 *similar program to compare two vectors.
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
    int evens[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int evens2[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int odds[] = {1, 3, 5, 7, 9, 11, 13, 15};

    unsigned evens_size = sizeof evens / sizeof(int);
    unsigned odds_size = sizeof evens / sizeof(int);

    bool a_isequal = true;
    if (evens_size == odds_size)
    {
        int *pe = evens;
        int *po = evens2;
        for (size_t i = 0; i < evens_size; i++)
        {
            if (*(pe + i) != *(po + i))
            {
                a_isequal = false;
                break;
            }
        }
    }
    else
        a_isequal = false;

    vector<int> v_evens = {2, 4, 6, 8, 10, 12, 14, 16};
    vector<int> v_odds = {1, 3, 5, 7, 9, 11, 13, 15};

    bool v_isequal = true;

    if (v_evens.size() == v_odds.size())
    {
        for (size_t i = 0; i < odds_size; i++)
        {
            if (v_evens[i] != v_odds[i])
            {
                v_isequal = false;
                break;
            }
        }
    }
    else
        v_isequal = false;

    if (a_isequal)
    {
        cout << "{";
        for (size_t i = 0; i < evens_size; i++)
        {
            cout << evens[i] << ",";
        }
        cout << "} == {";

        for (size_t i = 0; i < odds_size; i++)
        {
            cout << evens2[i] << ",";
        }
        cout << "}" << endl;
    }
    else
    {
        cout << "{";
        for (size_t i = 0; i < evens_size; i++)
        {
            cout << evens[i] << ",";
        }
        cout << "} != {";

        for (size_t i = 0; i < odds_size; i++)
        {
            cout << odds[i] << ",";
        }
        cout << "}" << endl;
    }

    if (v_isequal)
    {
        cout << "{";
        for (size_t i = 0; i < v_evens.size(); i++)
        {
            cout << v_evens[i] << ",";
        }
        cout << "} == {";

        for (size_t i = 0; i < v_odds.size(); i++)
        {
            cout << v_odds[i] << ",";
        }
        cout << "}" << endl;
    }
    else
    {
        cout << "{";
        for (size_t i = 0; i < v_evens.size(); i++)
        {
            cout << v_evens[i] << ",";
        }
        cout << "} != {";

        for (size_t i = 0; i < v_odds.size(); i++)
        {
            cout << v_odds[i] << ",";
        }
        cout << "}" << endl;
    }

    return 0;
}