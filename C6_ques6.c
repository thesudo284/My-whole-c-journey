/*Try problem 3 using call by value and verify that it does not change the value of
the said variable*/

#include<stdio.h>
void summ(int* a);

void summ(int* a){
    *a = 10;
    *a = *a * 10;
    
}

int main(){
    int x = 11;
    

   printf("The current value of x is %d\n", x);

   summ(&x);
   printf("The current value of x now is %d\n", x);

}

//its unchanged