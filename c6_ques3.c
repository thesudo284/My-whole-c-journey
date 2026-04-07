/*Write a program to change the value of a variable to ten times of its current
value.
*/

#include<stdio.h>

void change(int* perr);

void change(int* perr){
    *perr = *perr * 10;
}

int main(){
    int x = 5;

    printf("The current value of variable x is %d\n", x);

    change(&x);

    printf("The current value of variable x is now %d\n", x);
    
}
//solved