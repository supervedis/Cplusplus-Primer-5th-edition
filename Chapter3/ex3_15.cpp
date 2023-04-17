/*
 *Exercise 3.15: Repeat the previous program but read strings this time.
 */
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<string> sentences;
    string sentence;
    while (cin >> sentence)
    {
        sentences.push_back(sentence);
    }

    return 0;
}