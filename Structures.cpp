#include <iostream>
#include <stdio.h>
#include <strings.h>

using namespace std;

struct employee
{
    char Name[10];
    char Employee_ID[10];
    char Experience[10];
    char Salary[10];
};

int main()
{
    char n;
    printf("Enter number of Employee: ");
    scanf("%d",&n);
    //getchar();

    int i;
    struct employee arr[n];
    for (i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter Employee's name: ");
        gets(arr[i].Name);
        printf("Enter Employee Id: ");
        gets(arr[i].Employee_ID);
        printf("Enter Experience: ");
        gets(arr[i].Experience);
        printf("Enter salary: ");
        gets(arr[i].Salary);
    }
    for (i=1;i<=n;i++)
    {
        fflush(stdin);
        printf("\nName of Employee %d: %s",i,arr[i-1].Name);
        printf("\nEmployee's ID: %s",arr[i-1].Employee_ID);
        printf("\nExperience: %s",arr[i-1].Experience);
        printf("\nSalary: %s",arr[i-1].Salary);
    }
    return 0;

}
