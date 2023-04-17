/*
 *Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators.
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
    vector<int> v1;
    decltype(v1.size()) v1_size = v1.size();
    cout << "Size of v1 is: " << v1_size << endl;
    for (auto it = v1.cbegin(); it < v1.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    vector<int> v2(10);
    decltype(v2.size()) v2_size = v2.size();
    cout << "Size of v2 is: " << v2_size << endl;
    for (auto it = v2.cbegin(); it < v2.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v3(10, 42);
    decltype(v3.size()) v3_size = v3.size();
    cout << "Size of v3 is: " << v3_size << endl;
    for (auto it = v3.cbegin(); it < v3.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v4{10};
    decltype(v4.size()) v4_size = v4.size();
    cout << "Size of v4 is: " << v4_size << endl;
    for (auto it = v4.cbegin(); it < v4.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v5{10, 42};
    decltype(v5.size()) v5_size = v5.size();
    cout << "Size of v5 is: " << v5_size << endl;
    for (auto it = v5.cbegin(); it < v5.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<string> v6{10};
    decltype(v6.size()) v6_size = v6.size();
    cout << "Size of v6 is: " << v6_size << endl;
    for (auto it = v6.cbegin(); it < v6.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<string> v7{10, "hi"};
    decltype(v7.size()) v7_size = v7.size();
    cout << "Size of v7 is: " << v7_size << endl;
    for (auto it = v7.cbegin(); it < v7.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}