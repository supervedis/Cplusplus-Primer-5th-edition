#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book1, book2, book3;
    std::cin >> book1 >> book2;
    book3 = book1 + book2;
    std::cout << book3 << std::endl;
    return 0;
}