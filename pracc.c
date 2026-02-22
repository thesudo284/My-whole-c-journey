#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter side of the square: ");
    scanf("%d", &a);
    
    // Use %lf for double results from pow()
    printf("The Area of this square is %lf\n", pow((double)a, 2));

    return 0;
}
