#include <iostream>
int main()
{
    int i = 0, &r = i;
    auto a = r;
    std::cout << "a before: " << a << std::endl;
    a = 42;
    std::cout << "a after: " << a << std::endl;

    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    std::cout << "b before: " << b << std::endl;
    b = 42;
    std::cout << "b after: " << b << std::endl;

    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
    std::cout << "c before: " << c << std::endl;
    c = 42;
    std::cout << "c after: " << c << std::endl;

    auto d = &i; // d is an int*(& of an int object is int*)
    std::cout << "d before: " << d << std::endl;
    // d = 42; not permitted, d only takes an address and not a literal.
    auto e = &ci;
    const auto f = ci;
    auto &g = ci; // g is a const int& that is bound to ci
    const auto &j = 42;
    return 0;
}