/*
 *Exercise 3.43: Write three different versions of a program to print the
 *elements of ia. One version should use a range for to manage the
 *iteration, the other two should use an ordinary for loop in one case using
 *subscripts and in the other using pointers. In all three programs write all the
 *types directly. That is, do not use a type alias, auto, or decltype to
 *simplify the code.
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

    printf("Managing iteration using a range for.\n");
    for (int(&p)[4] : ia)
    {
        for (int q : p)
        {
            printf("%d ", q);
        }
        printf("\n");
    }

    printf("\nManaging iteration using an ordinary for loop.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", ia[i][j]);
        }
        printf("\n");
    }

    printf("\nManaging iteration using an ordinary for loop and pointers.\n");
    for (int(*pi)[4] = ia; pi != ia + 3; pi++)
    {
        for (int *p = *pi, *q = p; p != q + 4; p++)
        {
            printf("%d ", *p);
        }
        printf("\n");
    }

    return 0;
}