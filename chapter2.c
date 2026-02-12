//instructions and oparators:
#include<stdio.h>
int main(){


    int i = 10;
    int j = i;
    printf("the value of i is %d and value of j is %d\n", i, j);

    int a = 6;
    int b = 3;
    int c = a+b;

    printf("1st number is %d 2nd number is %d and the sum is: %d\n", a,b,c);
    printf("and remainder of two number is %d\n", a%b);



    // Oparators
    // +
    // -
    // /
    //% (modulus)
    // this dosen'nt work for exponentiation in c
    //int d = 2^3; != 8
    //int and int => int
    //int and float ==> float
    //float float ==> float
    //==========type conversion==========
    int pro = 9;
    int fro = 2;
    float crow = pro/fro;
    int k = 3.0/9;
    float l = k;
    printf("fffffffffff %d\n", l);

    
    printf("the value of pro/fro is %d\n", crow);
    //idk why the output are not samee
    // C does'nt follow BODMAS mathemetical rule
    /*
    priority:
    1st ==> "*",/,%
    2nd ==> +-
    3rd ==> = 
    *** Absence of parenthesis
    */
   int m = 3;
   int fu = 6;
   int er = 9;
   float n = 45.22;

   printf("the value of %d\n", m*fu/er+7);
   printf("the value of %d\n", 3*fu/2*er+7*m);

   m = (int) n; //type casting
   printf("%d\n", m);

    return 0;
}
