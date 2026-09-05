#include<stdio.h>
int main(){
    int number;
    printf("Enter Number to check(Even/Odd): ");
    scanf("%i",&number);
    if(number%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}