#include<stdio.h>

int main(){
    printf("Enter Any Number: ");
    int a;
    scanf("%d", &a);
    int i = 0;
    while(i <= 10)
    {

        
        i = i+1;
        int multi = i*a;
        printf("%d X %d\n is = %d\n", a, i, multi);
    }

    return 0;
    
    

    
    
}