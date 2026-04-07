/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/
#include<stdio.h>
void calk(int a, int b, int* sum, float* ave);

void calk(int a, int b, int* sum, float* ave){
    *sum = (a+b);
    *ave = (float)(a+b)/2;
}



int main(){
    int x = 5;
    int y = 5;
    int s;
    float v;
    calk(x,y, &s, &v);
    printf("The sum of %d and %d is %d\n", x, y, s);
    printf("The average of %d and %d is %d\n", x,y,v);

    return 0;

    //solved


}