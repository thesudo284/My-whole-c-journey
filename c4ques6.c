/*Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10). */

//Ahh thats so simple

#include<stdio.h>

int main(){
    int x = 8;
    for (int i = 0; i < 11; i++)
    {
        int mul = x*i;
        printf("%d X %d is = %d\n",x, i, mul);
    }


    return 0;
    
}

//Developed By-- Rajdip(junior C developer)