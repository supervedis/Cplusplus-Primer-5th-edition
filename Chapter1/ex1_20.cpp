#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Transaction " << i << " ";
        std::cin >> book;
        std::cout << book << std::endl;
    }

    return 0;
}