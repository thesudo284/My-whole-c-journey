//Write a program to sum first ten natural numbers using while loop.

#include<stdio.h>

int main(){
    int i = 1;

    int sum = 0;
    
    while (i<10)
    {
        i++;
        printf("the testing %d\n", i);
        int sum = i*(i+1)/2;

        
        
        printf("The Sum %d\n", sum);
    }

    return 0;

    //after a long thinking 
    


}