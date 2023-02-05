// Linear Queues Program

#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int q[MAX], r = -1, f = 0, i;

void push()
{
    if(r==MAX-1)
    {
        printf("Queue Out of Memory!! \n");
        return;
    }
    printf("Element : ");
    scanf("%d", &q[++r]);
}

void pop()
{
    if(f>r)
    {
        printf("Empty Queue!! \n");
        return;
    }
    printf("Element %d deleted. \n", q[f++]);
}

void display()
{
    if(f>r)
    {
        printf("Empty Queue!! \n");
        return;
    }
    printf("Elements are \n");
    for (i = r; i >= f; i--)
    {
        printf("%d \t", q[i]);
    }
    printf("\n");
}

void main()
{
    int choice;
    while(1)
    {
        printf("\nQueue Operations available \n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Display \n");
        printf("4. Exit \n\n");
        printf("Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid Choice !!\n"); continue;
        }
    }
}