#include<stdio.h>

//function prototype

int sum(int, int);

//function definition


int sum(int x, int y){
    printf("The Sum Of The Two GIven Numbers Is %d\n", x+y);
    
    return x+y;  
    //then return it.           
}

void display(); //design this function to return nothing.

int change(int ra);

int change(int ra){
     ra = 78;
    return 0;
}

int factorial(int);
int factorial(int n){

    if(n == 1 || n == 0){
        return 1;
    }

    return factorial(n-1) * n;

}

int main(){

    int a = 12;
    int b = 56;
    int c = 78;
    int s = 22;

    // int sum1 = (a+b);

    // printf("The Sum is %d\n", sum1);

    int d = sum(45, 55); //only number print not the character

    printf("%d\n", d);

    sum(a,b);

    sum(c, s);

    sum(50, 50);
    int f = 22; // it does not change
    change(f);
    printf("f is %d\n", f);

    display();


    //recursion
    int v = 4;

    printf("The FActorial of %d is %d\n", v, factorial(v));



    return 0;
}

void display(){
    printf("Hi i am display\n");
}