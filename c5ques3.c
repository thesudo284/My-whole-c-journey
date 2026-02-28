//What will the following line produce in a C program:
/*int a = 4;
printf("%d %d %d \n", a, ++a, a++);
*/

//ANS:-

#include<stdio.h>

int main(){
    int a = 4;

    printf("%d %d %d \n", a, ++a, a++);

    // i am sure the output becomes 6, 6, 4

}