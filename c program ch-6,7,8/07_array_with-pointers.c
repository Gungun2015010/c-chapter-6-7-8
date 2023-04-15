#include<stdio.h>
int main(){
    int marks[4];
    int *a;
    a = &marks[0];
    for (int i = 0; i < 4; i++)
    {
    printf("Enter the value of student %d:   \n",i);
    scanf("%d",a);
    a++;
    } for (int i = 0; i < 4; i++)
    {
        printf(" the value of marks for student %d is %d\n",i,marks[i]);
    }
    
    
    return 0;
}