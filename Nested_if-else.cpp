#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    printf("Enter your percentage: ");
    int percentage;
    scanf("%d", &percentage);
    if ((percentage>=80) && (percentage<=100))
    {
        printf("A Grade");
    }
    else if ((percentage>=70) && (percentage<=80))
    {
        printf("B Grade");
    }
    else if ((percentage>=60) && (percentage<=70))
    {
        printf("C Grade");
    }
    else if ((percentage>=45) && (percentage<=60))
    {
        printf("D Grade");
    }
    else
    {
        printf("FAIL");
    }

}
