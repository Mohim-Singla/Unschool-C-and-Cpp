#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    char str1[10]="abcd";
    char str2[10]="abcd";
    char str3[10]="dcba";
    int x = strcmp(str1, str3);
    if (x==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");

    strcpy(str1, str3);
    printf("\nAfter copying str3 to str1 we get str1 as: %s", str1);

    printf("\nGiven string is: %s",str1);
    printf("\nAfter reversing it, we get: %s",strrev(str1));

    printf("\nLength of string %s is: %d",str1,strlen(str1));

    strupr(str1);
    printf("\nWriting string string in upper characters: %s",str1);
    printf("\nNow printing string string in lower characters: %s",strlwr(str1));

    int y,z;
    printf("\nEnter 2 numbers: ");
    scanf("%i",&y);
    scanf("%i",&z);
    printf("Testing power function on %d and %d, we get: %.2lf",y,z,pow(y,z));
    printf("\nSquare root of %d is: %f",y,sqrt(y));

    float d;
    printf("\nEnter a float number: ");
    scanf("%f",&d);
    printf("Greatest integer of %f is: %.2lf",d,floor(d));
    printf("\nThe smallest integer that is greater than or equal to %f is: %.2lf",d,ceil(d));

    srand(time(0));
    printf("\nRandom number generated using rand() function between 3 and -3 is: %i",rand()%3-3);



    return 0;
}
