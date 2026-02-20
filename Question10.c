//Random Number Guessing Game


//Write a C program that generates a random number between 1 and 20 and asks the user to guess it. Use a while loop to give the user multiple chances until they guess the correct number.

//its not code with harry's question 

#include<stdio.h>

int main(){
    int a;
    printf("=========Guessing Game=========\n");
    printf("Enter Any Number For Guessing: ");
    scanf("%d", &a);

    int i = 1;

    while (i<=20)
    {
        
        i++;
    }

    if(a==i){
        printf("WOW!! You Have Entered Right\n");
    }

    else{
        printf("OHHH!!! You Failed....\n");
    }
        return 0;
}
