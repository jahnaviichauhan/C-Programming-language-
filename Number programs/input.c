//C program to print your name, date of birth, and mobile number

#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    char dob[50];
    long int contact;
    printf("Enter name : ");
    scanf("%si",name);
    printf("Enter date of birth : ");
    scanf("%s",dob);
    printf("Enter mobile number : ");
    scanf("%d",&contact);
    return 0;
}