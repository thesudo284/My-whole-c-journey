//========Conditional Instructions=========
#include<stdio.h>

int main(){


    int age = 25;
    if(age>60){
        printf("we are  inside if\n");
        printf("you can drive the car and you are a senior citizen\n");
    }
    else if(age>18){
        printf("You can drive the car\n");
    }
    /*if(age%5==0){
        printf("we are  inside another if\n");
        printf("your age is greater than 10\n");

    }*/
    else{
        printf("Your age is not greater than 10\n");
    }

    int a;
    int b;
    a = 1;
    b = 0;

    printf("The Value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a || b);
    printf("The value of not(a) is %d\n", !a); //reverse

    //haar kr jitne wale ko bajigaar kehte hein aur jo true ko false  anf false ko true krde
    //usko not kehte heinn...........


    //ternary oparetor:
    //short hand if-else:

    int x = 45;
    int y = 89;

    x>y?printf("x is greater\n"):printf("y is greater\n");

    //switch case control instruction:
    int l;
    printf("Enter the Value: ");
    scanf("%d", &l);
    switch(l){
        case 1:
           printf("you entered 1\n");
           break;
        case 2:
           printf("you entered 2\n");
           break;
        case 3:
           printf("you entered 3\n");
           break;
        case 4:
           printf("you enterd 4\n");
           break;
        default:
            printf("Nothing matched\n");
    }

    return 0;







    //Relation oparators "==", ">=", ">", "<", "<=", "!="
    // in C a non-zero value is coonsidered to be true.

 
}