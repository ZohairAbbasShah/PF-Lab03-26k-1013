#include<stdio.h>
int main(){
    char Gender;
    printf("Enter the gender(M,F): ");
    Gender=getchar();
    printf("The Gender the user is: ");
    putchar(Gender);

    char name[50];
    printf("Enter the name of the user: ");
    fgets(name,50,stdin);
    printf("The name of the user is: ");
    puts(name);
    return 0;
}