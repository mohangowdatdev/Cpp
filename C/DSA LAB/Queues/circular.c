// Circular Queues Program

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX], r = -1, f = 0, count = 0;

void push()
{
    if(count == MAX)
    {
        printf("Queue Full!! \n");
        return;
    }
    printf("Element : ");
    r = (r + 1) % MAX;
    scanf("%d", &q[r]);
    count++;
}

void pop()
{
    if(count==0)
    {
        printf("Empty Queue!! \n");
        return;
    }
    printf("Element %d deleted. \n", q[f]);
    f = (f + 1) % MAX;
    count--;
}

void display()
{
    if(count==0)
    {
        printf("Empty Queue!! \n");
        return;
    }
    int i, j = f;
    for (i = 1; i <= count; i++)
    {
        printf("%d \t", q[j]);
        j = (j + 1) % MAX;   
    }
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