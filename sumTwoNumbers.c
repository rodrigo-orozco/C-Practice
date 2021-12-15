#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, sum;

    puts("Insert the first number:");
    scanf("%d", &x);

    puts("Insert the second number:");
    scanf("%d", &y);

    sum = x + y;

    printf("The result of the sum of the two integers is: %d\n", sum);

    return 0;
}