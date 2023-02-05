// Array Operations - Insertion & Deletion

#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int a[MAX], n, ele, pos, i;

void create()
{
    printf("Number of elements : ");
    scanf("%d", &n);
    printf("Elements : ");
    for (i = 0; i < n;i++)
    {
        scanf("%d", &a[i]);
    }
}

void insert()
{
    printf("Position : ");
    scanf("%d", &pos);
    if(pos>n)
    {
        printf("Invalid Position!! \n");
    }
    printf("Element : ");
    scanf("%d", &ele);
    for ( i = n; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = ele;
    n++;
}

void delete()
{
    printf("Position : ");
    scanf("%d", &pos);
    if(pos>n)
    {
        printf("Invalid Position!! \n");
        return;
    }
    for (i = pos; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void display()
{
    if(n==0)
    {
        printf("Empty List!! \n");
        return;
    }
    printf("Elements are : \n");
    for (i = 0; i < n;i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}

void main()
{
    int choice;
    create();
    while(1)
    {
        printf("Operations Available are : \n");
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Display \n");
        printf("4. Exit \n\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: insert(); break;
        case 2: delete (); break;
        case 3: display(); break;
        case 4: exit(0); break;
        default: printf("Invalid Choice \n"); continue;
        }
    }
}