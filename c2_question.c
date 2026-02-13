/*1. Which of the following is invalid in C?
a. int a=1; int b = a;
b. int v = 3*3;
c. char dt = ‘21 dec 2020’;*/

#include<stdio.h>

int main(){
    int a;
    a = 1;
    int b = a;
    int v = 3*3;
    printf("%d\n", v);
    printf("%d\n", b);

    char dt = '21 dec 2020';

    printf("%c\n", dt);


    return 0;

}