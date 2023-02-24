/*
 *Exercise 2.18: Write code to change the value of a pointer. Write code to
 *change the value to which the pointer points.
 */
#include <iostream>
int main()
{
    int prime = 2;          // declare an int object and initialize it with the 1st prime.
    int *prime_1 = nullptr; // declare a Null Pointer.
    int *prime_2 = &prime;  // declare an int pointer and initialize it with the prime address
    prime_1 = prime_2;      // assign the address stored in prime_2 to prime_1 pointer
    *prime_1 = 3;           // modify the value of prime through a pointer.
    return 0;
}