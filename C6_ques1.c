/* Write a program to print the address of a variable. Use this address to get the
value of the variable */

#include<stdio.h>

int main(){
    int a = 67;
    int* a_pointer = &a;
    printf("The adress of a is %p\n", a);
    printf("The value of var a is %d\n", *a_pointer);

    return 0;

}

//solution is simple as that 


