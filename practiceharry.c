//Area of rectangle using user input
// formula a = w*h
#include<stdio.h>
int main(){
    int h;  // height as variable
    int w;  // widht as variable
    printf("Enter the Rectangle height: ");         //Input process from a user
    scanf("%d", &h);
    printf("you have entered height: %d cm \n", h);
    printf("Enter the Rentangle width: ");
    scanf("%d", &w);
    printf("you have entered width: %d cm \n", w);
    


    int sum = h*w;   //Processing

    printf("Area of the Rectangle is: %d\n", sum); //Output


    
    return 0;
}