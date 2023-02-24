#include <iostream>
#include "Sales_item.h"
int main()
{
    int count = 1;
    Sales_item curr_trns, transaction;
    if (std::cin >> curr_trns)
    {
        while (std::cin >> transaction)
        {
            if (curr_trns.isbn() == transaction.isbn())
                ++count;
            else
            {
                std::cout << "Transaction [ " << curr_trns << " ] occured " << count << " times" << std::endl;
                curr_trns = transaction;
                count = 1;
            }
        }
    }
    std::cout << "Transaction [ " << curr_trns << " ] occured " << count << " times" << std::endl;
}