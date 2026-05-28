//If you want to use my code as your revission template then run each topics and others comment out
//Author:- Rajdip Nandi
#include<stdio.h>


int main(){

    int go[90];

    go[0] = 55;
    go[1] = 78;
    go[2] = 88;
    //we can go at the end 89 exactly;
    printf("Marks 0 and Marks 1 is %d and %d\n", marks[0], marks[1]);
    

    int marks[5];
 
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        printf("The value of index %d is %d\n", i, marks[i]);

    }


    //direct assisgnment

    int cgpa[] = {8, 6, 9};

    for(int i = 0; i < 3; i++){
        printf("The Value in number %d is %d\n", i, cgpa[i]);
    }


    
    //Poiter arithmatic
    
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    
    //they are equal
    ptr++;
    printf("The address of a is %u\n", ptr); //encrymenent into 4 means 4 bit integers means added 4

    int marks[] = {12,34, 53, 66}
    int* poi = &marks[0];

    for(int x = 0; x < 4; x++){
        printf("The marks at index %d is %d", x, marks[x]);
        poi++;
    }

    return 0;
    
    
    


}