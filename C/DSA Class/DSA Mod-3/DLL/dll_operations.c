/* C program to do dll*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    char id[20], name[20], branch[20], special[20];
    struct node *next;
    struct node *prev;
}Node;

Node *front=NULL;

Node* tempcreate()
{
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("Enter Professor Details : \n");
    printf("ID : ");
    scanf("%s", temp->id);
    printf("Name : ");
    scanf("%s", temp->name);
    printf("Branch : ");
    scanf("%s", temp->branch);
    printf("Specialisation : ");
    scanf("%s", temp->special);
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
    printf("ID\tNAME\tBRANCH\tSPECIALISATION\t\n");
    while(temp!=NULL)
    {
        printf("%s\t%s\t%s\t%s\t\n",temp->id,temp->name,temp->branch,temp->special);
        temp = temp->next;
        count++;
    }
    printf("\n");
    printf("Number of Nodes = %d\n", count);
}

void insertfront()
{
    Node *temp = tempcreate();
    temp->next = front;
    front = temp;
}

void insertrear()
{
    Node *last = front;
    Node *temp = tempcreate();
    if(front == NULL)
    {
        front = temp;
        return;
    }
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = temp;
    temp->prev = last;
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

void stack()
{
    int choice;
    while(1)
    {
        printf("-----------------------------\n");
        printf("Stack Operations Supported : \n");
        printf("1. PUSH \n2. POP \n3. Display \n4. MainMenu \n");
        printf("--------------\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);
        printf("--------------\n");
        switch(choice)
        {
            case 1: insertfront(); break;
            case 2: deletefront(); break;
            case 3: display(); break;
            case 4: return; 
            default : printf("Invalid Choice !!\n"); break;
        }
    }
}

void queue()
{
    int choice;
    while(1)
    {
        printf("-----------------------------\n");
        printf("Queue Operations Supported : \n");
        printf("1. Insert \n2. Delete \n3. Display \n4. MainMenu \n");
        printf("--------------\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);
        printf("--------------\n");
        switch(choice)
        {
            case 1: insertrear(); break;
            case 2: deletefront(); break;
            case 3: display(); break;
            case 4: return; 
            default : printf("Invalid Choice !!\n"); break;
        }
    }
}

void main()
{
    int choice;
    while(1)
    {
        printf("-----------------------------\n");
        printf("What do you want to do ? \n");
        printf("1. Stack \n2. Queue \n3. Display \n4. Exit \n");
        printf("--------------\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);
        printf("--------------\n");
        switch(choice)
        {
            case 1: stack(); break;
            case 2: queue(); break;
            case 3: display(); break;
            case 4: exit(0); 
            default : printf("Invalid Choice !!\n"); break;
        }
    }
}