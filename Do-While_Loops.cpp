#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x,y=0;
    while (x!=0)

    {

        printf("Enter a number: ");
        scanf("%d",&x);
        y=y+x;
    }
    printf("Sum= %d",y);
    //Sum would be displayed when the user enters 0.
    return 0;

}
