/*
 *Exercise 3.22: Revise the loop that printed the first paragraph in text to
 *instead change the elements in text that correspond to the first paragraph
 *to all uppercase. After you’ve updated text, print its contents.
 */
#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> paragraphs = {"Revise the loop that printed the first paragraph in text",
                                 "to instead change the elements in text that correspond to the first paragraph to all",
                                 "uppercase.After you've updated text, print its contents.",
                                 "",
                                 "Revise the loop that printed the first paragraph in text to instead change",
                                 "the elements in text that correspond to the first paragraph to all uppercase.",
                                 "After you've updated text, print its contents."};
    for (auto it = paragraphs.begin(); it != paragraphs.end() && !it->empty(); it++)
    {
        for (auto sit = it->begin(); sit != it->end(); ++sit)
        {
            *sit = toupper(*sit);
        }

        cout << *it << endl;
    }

    return 0;
}