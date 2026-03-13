//Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
//earth. Consider g = 9.8m/s2
#include<stdio.h>

int main(){
    int f;
    int m;
    float g;
    g = 9.8;

    printf("Enter The Body Mass: ");
    scanf("%d", &m);

    int formula = m*g;

    printf("The Force execrted by the person is %d N\n", formula);



    return 0;
}


//THis is without function
