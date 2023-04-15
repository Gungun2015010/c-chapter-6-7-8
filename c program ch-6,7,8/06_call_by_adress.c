#include<stdio.h>
void swap(int *a , int *b);
void worng_swap(int a , int b);

int main(){
    int a=5,b=9;
    worng_swap(a, b);
    printf("the value before swaping the adresses is a = %d and b = %d",a,b);
    swap(&a,&b);
    printf("the value after swaping the adresses is a = %d and b = %d", a,b);
    return 0;
}
//call by referance
void swap(int *a , int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
//call by value
//this is not works because the current copy can't will be changing
void worng_swap(int a , int b) 
{
int c;
c=a;
a=b;
b=c;
}