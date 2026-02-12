/*Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).*/

// formula f = 9/5*c +32

#include<stdio.h>

int main(){
    int c;
    float f;
    printf("Enter the tempareture in celsius: ");
    scanf("%d", &c);
    printf("You enter the tempareture: %f degree C\n", c);

    f = (9.0/5.0)*c + 32;
    

   

    printf("The tempareture is: %f degree farenheit\n", f);

    return 0;
    


    
}
