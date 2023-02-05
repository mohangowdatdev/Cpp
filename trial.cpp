/* C program to do sll*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    char name[20];
    char usn[20];
    char phone[15];
    char per[10];
    struct node *next;
} Node;
Node *front = NULL;
Node *front2 = NULL;

void display()
{
    Node *temp = front;
    if (front == NULL)
    {
        printf("Empty list!!\n");
        return;
    }
    printf("NAME\tUSN\tPHONE\tPERCENTAGE");
    printf("\n");
    while (temp != NULL)
    {
        printf("%s\t%s\t%s\t%s", temp->name, temp->usn, temp->phone, temp->per);
        temp = temp->next;
        printf("\n");
    }
}

void deletefront()
{
    Node *ptr = front;
    if (front == NULL)
    {
        printf("Empty list!!\n");
        return;
    }
    front = front->next;
    printf("Student %s data has been deleted\n", ptr->name);
    free(ptr);
}

Node *tempcreate()
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    printf("Enter student details\n");
    printf("Name:");
    scanf("%s", temp->name);
    printf("USN:");
    scanf("%s", temp->usn);
    printf("Phone:");
    scanf("%s", temp->phone);
    printf("Percentage:");
    scanf("%s", temp->per);
    temp->next = NULL;
    return temp;
}

void push()
{
    Node *temp, *ptr;
    temp = tempcreate();
    temp->next = front;
    front = temp;
}

void insertrear()
{
    Node *temp, *ptr;
    temp = tempcreate();
    if (front == NULL)
    {
        front = temp;
    }
    else
    {
        ptr = front;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}

void search()
{
    char namese[20];
    Node *temp = front;
    int count = 0;
    printf("Student name to search:");
    scanf("%s", namese);
    while (temp != NULL)
    {

        if (!strcmp(temp->name, namese))
        {
            printf("%s is present in position %d of the list\n", temp->name, (count + 1));
            return;
        }
        temp = temp->next;
        count++;
    }
    printf("%s is not present in the list\n", namese);
}

void secondle()
{
    Node *temp, *ptr;
    temp = tempcreate();
    if (front2 == NULL)
    {
        front2 = temp;
    }
    else
    {
        ptr = front2;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}

void concatenate()
{
    Node *temp = front;

    while (temp->next != NULL)
        temp = temp->next;
    temp->next = front2;
}

void stackoperation()
{
    int choice;
    while (1)
    {
        printf("Stack menu:\n1.push\n2.pop\n3.Display\n4.return to main menu\n");
        printf("Choice?:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            deletefront();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
            break;
        default:
            printf("Given choice only!\n");
        }
    }
}

void queueoperation()
{
    int choice;
    while (1)
    {
        printf("queue menu:\n1.Insertrear\2.deletefront\n3.Display\n4.return to main menu\n");
        printf("Choice?:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertrear();
            break;
        case 2:
            deletefront();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
    }
}
int main()
{
    int choice, n2;
    while (1)
    {
        front2 = NULL;
        printf("Menu:\n1.stack\n2.queue\n3.search\n4.Concatenate\n5.Display\n6.exit\n");
        printf("Choice?:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            stackoperation();
            break;
        case 2:
            queueoperation();
            break;
        case 3:
            search();
            break;
        case 4:
            printf("Enter the number of students for second list:");
            scanf("%d", &n2);
            for (int i = 0; i < n2; i++)
                secondle();
            concatenate();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter given choice only\n");
        }
    }
    return 0;
}
