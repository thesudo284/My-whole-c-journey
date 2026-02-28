//Write a function to convert Celsius temperature into Fahrenheit

#include<stdio.h>

int calculator(int);

int calculator(int c){
    int farenheit = (c*9/5)+32;

    return farenheit;
}

int main(){
    int x;
    printf("=====WELCOME TO FUNCTION BASED TEMPARETURE CALCULATOR=====\n");
    printf("Enter the tempareture of celcius: ");
    scanf("%d", &x);

    int l;
    l = calculator(x);

    printf("The celcius %d convert in farenheit is %d degree farenheit\n", x, l);

    return 0;


}