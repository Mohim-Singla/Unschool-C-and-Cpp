#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

float area(float x, float y)
{
    return x*y;
}

float area(float radius)
{
    return 3.14*radius*radius;
}

float area(float a,float b, float c)
{
    float s;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    int n;
    cout<<"Enter 1 for calculating area of a circle, 2 for triangle and 3 for rectangle: ";
    cin>>n;
    switch(n)
    {
    case 1:
        {
            float radius;
            cout<<"Enter radius of the circle: ";
            cin>>radius;
            cout<<"\nArea of Circle is: "<<area(radius);
            break;
        }
    case 2:
        {
            cout<<"Enter sides of triangle: ";
            float a,b,c;
            cin>>a>>b>>c;

            if (a < 0 || b < 0 || c < 0 ||  (a + b <= c) || a + c <= b ||  b + c <= a)
            {
                cout << "\nNot a valid triangle";
                exit(0);
            }
            else
            {
                cout<<"\nArea of triangle is: "<<area(a,b,c);
            }
            break;


        }
    case 3:
        {
            float length,breadth;
            cout<<"Enter Length and breadth of the rectangle: ";
            cin>>length>>breadth;
            cout<<"Area of Rectangle is: "<<area(length, breadth);
            break;
        }
    default:
        {exit(0);}
    }

}
