//A simple calculator.....

#include<stdio.h>

int main(){
    float a;
    printf("NOTE: OUTPUT CAN BE WITH MANY ZERO SO INGNORE THEM\n");
    printf("Enter 1st number: ");
    scanf("%f", &a);
    float b;
    printf("Enter 2nd Number: ");
    scanf("%f", &b);
    int x;
    printf("Enter Oparetor for 1,2,3,4(+,-,/,* etc):  ");
    scanf("%d", &x);
    if(x==1){
        float sum = (a+b);

        printf("The sum of %f and %f is %f\n", a,b,sum);

    }
    if(x == 2){
        float subs = (a-b);

        printf("The Substraction Between %f and %f is %f\n", a, b, subs);
    }
    if(x == 3){

        float div = (a/b);
        printf("The Division of %f And %f is %f\n", a,b,div);
    }
    if(x == 4){

        float mul = (a*b);
        printf("The Multiplication between %f and %f is %f", a,b,mul);
    }

    return 0;


}

//AUTHOR:- Rajdip Nandi(Junior c Developer)