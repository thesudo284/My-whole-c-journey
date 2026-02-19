//Write a program to print multiplication table of 10 in reversed order.

#include<stdio.h>

int main(){
    printf("Enter Any number: ");
    int x;
    scanf("%d", &x);
    for (int i = 10; i ; i--)
    {
        int multi = x*i;
        printf("%d X %d is = %d\n", x, i, multi);
    }
    return 0;
    
}