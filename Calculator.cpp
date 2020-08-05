#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    printf("Enter 2 numbers: ");
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("The numbers entered are %d and %d.",x,y);
    printf("Sum of %d and %d is %d.",x,y,x+y);
    printf("Subtraction of %d and %d is %d.",x,y,x-y);
    printf("Multiplication of %d and %d is %d.",x,y,x*y);
    printf("Quotient when %d is divided by %d is %d.",x,y,x/y);
    printf("Remainder when %d is divided by %d is %d.",x,y,x%y);
    return 0;

}
