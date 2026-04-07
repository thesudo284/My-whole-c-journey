/*Write a program to print the value of a variable i by using “pointer to pointer” type
of variable*/

#include<stdio.h>

int main(){
    int i = 67;
    int* j = &i;
    int** k = &j;
    

    printf("The Value of Variable i %d\n", i);
    printf("The value of pointer j is %d\n", *j);
    printf("The value of pointer k is %d\n", **k);
    printf("The value of pointer k is %d\n", *(&i));

    return 0;

    //solved
    
 
}