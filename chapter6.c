#include<stdio.h>

int sum(int* ,int*);

void swap(int* k, int* o)
{
    int temp;
    temp = *k;
    *k = *o;
    *o = temp;
}

int sum(int* s, int* l){
    *s = 8;
    *l = 10;
    return (*s+*l);
}

int main(){

    char i= 'A';

    char* j = &i;    //* means pointer
    float a = 12.555642;
    float* k1 = &a;
    printf("The adress of i is %p\n", &i);
    
    printf("The adress of j is %p\n", j);

    printf("The adress of a is %p\n", &a);
    printf("The adress of k1 is %p\n", k1);

    //pointer to pointer

    int x =6;
    int* y = &x;
    int** z = &y;
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", *y);
    printf("The value of z is %d\n", **z);
    printf("The value of x is %d\n", *(&x));
    
    

    //call by refference
    int xl = 6, yl = 9;

    printf("The sum of xl and yl is %d\n", sum(&xl, &yl));


    int d = 4;
    int lk = 9;
    swap(&d, &lk);
    printf("The value of d is %d and lk is %d\n", d, lk);




    return 0;



    
    
       //after a long time 🤩🤩🤩


}