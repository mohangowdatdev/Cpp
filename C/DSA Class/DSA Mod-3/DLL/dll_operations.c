/* C program to do dll*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}Node;

Node *front=NULL;

Node* tempcreate()
{
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("Enter Number : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void display()
{
    Node *temp = front;
    int count = 0;
    if(front==NULL)
    {
        printf("EMPTY LIST !! \n");
        return;
    }
    printf("\n");
    printf("List Elements are : \n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
        count++;
    }
}

void insertfront()
{
    Node *temp = tempcreate();
    temp->next = front;
    front = temp;
}

void insertrear()
{
    Node *ptr = front;
    Node *temp = tempcreate();
    if(front == NULL)
    {
        front = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
}

void deletefront()
{
    Node *ptr = front;
    if(front == NULL)
    {
        printf("EMPTY LIST!!\n");
        return;
    }
    front = front->next;
    front->prev = NULL;
    free(ptr);
}

void deleterear()
{
    Node *ptr = front, *temp;
    if(front==NULL)
    {
        printf("EMPTY LIST!!\n");
        return;
    }
    while(ptr->next != NULL)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    free(ptr);
    temp->next = NULL;
}

void main()
{
    int choice;
    while(1)
    {
        printf("\n--------------------------- \n");
        printf("Available operations are: \n 0. [ EXIT ] \n");
        printf(" 1. Display \n 2. Insert Front \n 3. Insert Rear \n");
        printf(" 4. Delete Front \n 5. Delete Rear \n");
        printf("---------------------------\n");
        printf("Enter your choice - ");
        scanf("%d", &choice);
        printf("\n--------------------------- \n");
        switch(choice)
        {
            case 0: exit(0);
            case 1: display(); break;
            case 2: insertfront(); break;
            case 3: insertrear(); break;
            case 4: deletefront(); break; 
            case 5: deleterear(); break;
            default : printf("Invalid Choice !!\n"); break;
        }
    }
}