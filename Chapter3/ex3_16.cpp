/*
 * Exercise 3.16: Write a program to print the size and contents of the
 * vectors from exercise 3.13. Check whether your answers to that exercise
 * were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you
 * were wrong.
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
    for (decltype(v1.size()) i = 0; i < v1_size; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    vector<int> v2(10);
    decltype(v2.size()) v2_size = v2.size();
    cout << "Size of v2 is: " << v2_size << endl;
    for (decltype(v2.size()) i = 0; i < v2_size; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    vector<int> v3(10, 42);
    decltype(v3.size()) v3_size = v3.size();
    cout << "Size of v3 is: " << v3_size << endl;
    for (decltype(v3.size()) i = 0; i < v3_size; i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    vector<int> v4{10};
    decltype(v4.size()) v4_size = v4.size();
    cout << "Size of v4 is: " << v4_size << endl;
    for (decltype(v4.size()) i = 0; i < v4_size; i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    vector<int> v5{10, 42};
    decltype(v5.size()) v5_size = v5.size();
    cout << "Size of v5 is: " << v5_size << endl;
    for (decltype(v5.size()) i = 0; i < v5_size; i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    vector<string> v6{10};
    decltype(v6.size()) v6_size = v6.size();
    cout << "Size of v6 is: " << v6_size << endl;
    for (decltype(v6.size()) i = 0; i < v6_size; i++)
    {
        cout << v6[i] << " ";
    }
    cout << endl;

    vector<string> v7{10, "hi"};
    decltype(v7.size()) v7_size = v7.size();
    cout << "Size of v7 is: " << v7_size << endl;
    for (decltype(v7.size()) i = 0; i < v7_size; i++)
    {
        cout << v7[i] << " ";
    }
    cout << endl;
    return 0;
}