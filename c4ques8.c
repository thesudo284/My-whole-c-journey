//Write a program to check whether a given number is prime or not using loops.

#include<stdio.h>

int main(){

    int a;
    printf("Enter Any number: ");
    scanf("%d", &a);

    while (a>1, a%2!=0)
    {
        printf("The Number You Have Entered Is A Prime Number\n");
        break;
    }
    if(a<1, a%2==0){
        printf("You Don't Enter Any Prime Number\n");
    }
    
    
    
    return 0;


}

//By A Small Junior C Developer-- Rajdip;