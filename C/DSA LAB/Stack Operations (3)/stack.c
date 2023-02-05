// Stack Operations - Push & Pop

#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int s[MAX], ele, i, top = -1;

void push()
{
    if(top == MAX-1)
    {
        printf("Full !! \n");
        return;
    }
    printf("Element : ");
    scanf("%d", &s[++top]);
}

void pop()
{
    if(top==-1)
    {
        printf("Empty !! \n");
        return;
    }
    printf("Element %d deleted \n", s[top--]);
}

void display()
{
    if(top==-1)
    {
        printf("Empty !! \n");
        return;
    }
    printf("Elements are : \n");
    for (i = top; i >= 0;i--)
    {
        printf("%d \t", s[i]);
    }
    printf("\n");
}

void main()
{
    int choice;
    while(1)
    {
        printf("Operations Available are : \n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Display \n");
        printf("4. Exit \n\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: push(); break;
        case 2: pop (); break;
        case 3: display(); break;
        case 4: exit(0); break;
        default: printf("Invalid Choice \n"); continue;
        }
    }
}