#include<stdio.h>
#include<stdbool.h>
int main(){
    int i=10;
    float f=2.33;
    char c='M';
    bool b=true;

    printf("the size of int data type is: %zu\n",sizeof(i));
    printf("the size of float data type is: %zu\n",sizeof(f));
    printf("the size of char data type is: %zu\n",sizeof(c));
    printf("the size of bool data type is: %zu\n",sizeof(b));

    return 0;
}