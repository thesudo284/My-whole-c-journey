#include<stdio.h>

int main(){
    int i = 5;
    // while(i<120){
    // printf("pkmb %d baar\n", i);
    // i = i + 1;
    // }
    int x = 0;
    while(x<=20){
        if(x>=10){
            printf("Value %d\n", x);
            
        }
        x++;
    }
    i = i + 5;
    printf("Value of i is %d\n", i);
    printf("Now Value of i is %d\n", i++);
    i += 2;
    printf("value %d\n", i);
    //start from next

    // value from i++ and ++i is same in this code
    // but they are not same
    // i++ first print then increments(post increment oparator)
    //and the ++i is vice versa
    //i += 2; means i = i + 2;
    // Garbage value ==> a value thats means nothing.
    int y = 0;
    do
    {
       printf("Value of y is %d\n", y+1);
       y++;
    } while (y<15);



    int n = 15;
    for (int z = 0; z <= n; z++)
    {
        printf("%d\n", z);
    }
    for(int m = 6; m; m--){
        if(m==2){
            // break; //exit the loop now!
            continue; // skip the iteration now
        }
        printf("%d\n", m);
    }
    


    

    
    return 0;
}