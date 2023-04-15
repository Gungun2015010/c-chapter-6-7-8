#include <stdio.h>
void check_adress(int i);
int main()
{
    int i = 6;
    printf("the value of i is %d\n", i);
    check_adress(i);
    printf("the adress of i after apply the function is %u\n", &i);
    return 0;
}
void check_adress(int i)
{
    printf("the adress of i after apply the function is %u\n", &i);
}