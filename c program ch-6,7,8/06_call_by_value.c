#include<stdio.h>
int sum (int a,int b);
int main(){
int x =45,y=78;
printf("the value of a = %d and b = %d\n",x,y);
printf("the sum of a = %d and b = %d is %d\n",x,y,sum(x,y));
    return 0;
}
//iska answer isliye nhi aayega kyuki hm a and b ki values ki copy me function lga rahe h toh real value pr koi effect nhi aa sakta
int  sum (int a, int b){
   int c= a+b;
    a = 3488;
    b= 4567;
    return c;
}