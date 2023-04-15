#include <stdio.h>
int main()
{
    int a = 6;
    int *b;
    b = &a;
    printf("the value of a is %u\n", *b);
    printf("the adress of a is %u\n", &a);
    return 0;
}