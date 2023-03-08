 /*C program to accept the details of employees and display them using structure. Details include Employee ID, Name, Designation, Department, and Salary*/

#include<stdio.h>

struct employee
{
     int id;
     char name[50];
     char designation[50];
     char dept[50];
     int sal;
};

int main()
{
    int n,i;
    printf("Enter number of employees");
    scanf("%d", &n);
    struct employee emp[n];
    
    for(i=0;i<n;i++)
    {
     printf("Enter Employee Details:\n");
     printf("Enter Employee-Id : ");
     scanf("%d",&emp[i].id);
     printf("Enter Name        : ");
     scanf("%s",emp[i].name);
     printf("Enter Designation : ");
     scanf("%s",emp[i].designation);
     printf("Enter Department  : ");
     scanf("%s",emp[i].dept);
     printf("Enter Salary      : ");
    scanf("%d",&emp[i].sal);
    }
    
    for(i=0;i<n;i++)
    {
     printf("\nEmployee Details:\n");
     printf("Employee-Id : %d\n",emp[i].id);
     printf("Name        : %s\n",emp[i].name);
     printf("Designation : %s\n",emp[i].designation);
     printf("Department  : %s\n",emp[i].dept);
     printf("Salary      : %d\n",emp[i].sal);
    }
    return 0;
}