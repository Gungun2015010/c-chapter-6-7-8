#include <stdio.h>
void sum_and_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = *sum / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sum_and_avg(i, j, &sum, &avg);
    printf("the value of sum is %d\n", sum);
    printf("the value of avg is %f\n", avg);
    return 0;
}