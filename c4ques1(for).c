//Write a program to print multiplication table of a given number n.

//same problem with for loop

#include<stdio.h>

int main(){
    printf("Enter any number: ");
    int x;
    scanf("%d", &x);
    for (int i = 0; i <= 10; i++)
    {
        int mul = x*i;
        printf("%d X %d is = %d\n", x, i, mul);
    }

    return 0;
    
}