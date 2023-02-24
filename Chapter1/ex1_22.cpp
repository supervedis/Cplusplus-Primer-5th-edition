#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book, sum;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Transaction " << i + 1 << " ";
        std::cin >> book;
        sum += book;
    }
    std::cout << "Sum of transactions " << sum << std::endl;
    return 0;
}