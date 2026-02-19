/*What can be done using one type of loop can also be done using the other two
types of loops – true or false?
*/



// The Short Answer is True
//Let me show a infinity loop example in every loop

#include<stdio.h>


//NOTE:-    ONLY RUN 1 LOOP AND OTHERS COMMENT

int main(){
    // int i = 0;
    int x = 10;
    for (int i = 0; ; i++)
    {
        printf("Loop %d\n", i);
    }
    while (x>=10)
    {
        x++;
        printf("Loop %d\n", x);
    }
    int y = 10;
    do
    {
        y++;

        printf("LOOP %d", y);
    } while (y>=10);

    //three types(i mean two because do-while is also a while loop) of loop and same work
    
    
    

    return 0;
    
}