//Write a program using function to find average of three numbers.

#include<stdio.h>

int average(int, int, int);

int average(int a, int b, int c){
    int ave = (a+b+c)/3;
    

    
    return ave;
}

int main(){
    int x;
    int y;
    int z;
    printf("Enter Any Three Number And see the average\n");
    printf("Enter the 1st number: ");
    scanf("%d", &x);
    printf("Enter the 2nd number: ");
    scanf("%d", &y);
    printf("Enter The 3rd number: ");
    scanf("%d", &z);

    int l;

    l = average(x, y, z);

    printf("Avarage of %d, %d and %d is %d\n", x, y, z, l);


    return 0;



}