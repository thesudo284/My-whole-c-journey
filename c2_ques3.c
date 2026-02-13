//Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

#include<stdio.h>

int main(){
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;

    int c = 3*x/y - z+k;  //here first thing happend 3*2 = 6
                          // second 6/3 = 2
                          // third 2 - 3+1
                          // 4th -1+1
                          // result(output) will be 0
    printf("The Value:- %d\n", c);


    // "By a Junior Code Developer Rajdip"


    return 0;

}