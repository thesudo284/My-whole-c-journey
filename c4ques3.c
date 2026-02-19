/*A do while loop is executed:
a. At least once.
b. At least twice.
c. At most once.
*/
#include<stdio.h>
int main(){
    int a = 4;   //Runs Once
    
    do
    {
        printf("Its runs Once\n");
    } while (a>=5);
    
    int b = 10;

    do        //Runs Twice
    {
        b = b + 1;
        printf("Double print means its executed twice\n");
        if(b == 12){
            break;
        }
    } while (b>=10);

    return 0;

    // And second Language i Cant't Understand
    
}