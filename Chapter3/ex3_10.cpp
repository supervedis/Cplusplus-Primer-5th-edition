/*
 *Exercise 3.10: Write a program that reads a string of characters including
 *punctuation and writes what was read but with the punctuation removed.
 */
#include <iostream>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string prose;
    getline(cin, prose);
    string str_punct_removed;
    for (auto c : prose)
    {
        if (!ispunct(c))
        {
            str_punct_removed += c;
        }
    }
    cout << str_punct_removed << endl;
    return 0;
}