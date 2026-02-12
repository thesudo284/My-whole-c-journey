/* Calculate
volume of a cylinder given its radius and height.
*/

#include<stdio.h>

int main(){
    int r;
    int h;
    printf("Enter the Radius of the cylinder: ");
    scanf("%d", &r);
    printf("You enter the radius of cylinder: %dcm\n", r);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &h);
    printf("You enter the height of cylinder: %dcm\n", h);

    int sum = (22/7*r*r*h);

    printf("The Volume of the cylinder is: %dcm\n", sum);
    


    
}
