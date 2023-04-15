#include <stdio.h>
int main()
{
    int i = 10;
    int *f = &i;//f will store the adress of i
    printf("the value of i is %d\n", i);
    printf("F CONTAINS ADRESS OF I AND I'S ADRESS IS %u\n",*f);
    printf("the adress of i is %u\n",&i);
    printf("the adress of f is %u\n",*(&f));
    printf("the adress of f is %u\n",&f);
    printf("the adress of i is %u\n",f);
    

    return 0;
}