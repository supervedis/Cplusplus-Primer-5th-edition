/*
 * Exercise 3.17: Read a sequence of words from cin and store the values a
 * vector. After you’ve read all the words, process the vector and change
 * each word to uppercase. Print the transformed elements, eight words to a
 * line.
 */
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(void)
{
    // Read a sequence of words using cin
    string word;
    vector<string> words;
    while (cin >> word && word != "q")
    {
        words.push_back(word);
    }

    // Change each word in the vector to uppercase
    for (auto &wrd : words)
    {
        for (auto &c : wrd)
        {
            c = toupper(c);
        }
    }

    // Print the transformed elements eight words per line.
    for (decltype(words.size()) i = 0; i < words.size(); i++)
    {
        if (i % 8 == 0)
            cout << endl;
        cout << words[i] << " ";
    }

    return 0;
}