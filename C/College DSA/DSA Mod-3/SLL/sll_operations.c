#include<stdio.h>
#include<stdlib.h>

// Defining a Structure
// info/data   head/top/start/first
typedef struct node 
{
    int info;
    struct node *next;
}Node;

Node* start = NULL;

//Displaying of Linked List
void display()
{
    Node *ptr;
    if(start == NULL)
    {
        printf("Empty List!! \n");
        return;
    }
    else
    {
        ptr = start;
        printf("List elements are :\n");
        while (ptr!=NULL)
        {
            printf("%d \t", ptr->info);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

// Inserting element at Rare
void insertRare()
{
    Node *ptr, *temp;
    temp = (Node *)malloc(sizeof(Node));
    if(temp == NULL)
    {
        printf("Out of Memory Space. \n");
        exit(0);
    }
    printf("Element to be inserted : ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        
    }
    display();
}

// Inserting an Element at front
void insertFront()
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    if(temp==NULL)
    {
        printf("Out of Memory Space!! \n");
        return;
    }
    printf("Element to be Inserted : ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
    display();
}

// Inserting element at given position
void insertPos()
{
    Node *ptr, *temp;
    int pos;
    temp = (Node *)malloc(sizeof(Node));
    if(temp==NULL)
    {
        printf("Out of Memory Space!! \n");
        return;
    }
    printf("Element to be Inserted : ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    printf("Position for Element : ");
    scanf("%d", &pos);
    if(pos==1)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        ptr = start;
        for (int i = 1; i < pos-1;i++)
        {
            ptr = ptr->next;
        }
        if(ptr==NULL)
        {
            printf("Not a valid Position!!");
            return;
        }
        else
        {
            temp->next = ptr->next;
            ptr->next = temp;
        }
    }
    display();
}

// Deleting element at Rare
void deleteRare()
{
    Node *ptr, *temp;
    if(start==NULL)
    {
        printf("Empty List!! \n");
        return;
    }
    else if (start->next == NULL)
    {
        ptr = start;
        start = NULL;
        printf("Deleted Element %d \n", ptr->info);
        free(ptr);
    }
    else
    {
        ptr = start;
        while (ptr->next!=NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("Deleted Element %d \n", ptr->info);
        free(ptr);
    }
    display();
}

// Deleting an Element at front
void deleteFront()
{
    Node *ptr;
    if(start == NULL)
    {
        printf("List is Empty!!\n");
        return;
    }
    else
    {
        ptr = start;
        start = start->next;
        printf("Deleted element %d \n", ptr->info);
        free(ptr);
    }
    display();
}

// Deleting element at given position
void deletePos()
{
    Node *ptr, *temp;
    int pos;
    if(start==NULL)
    {
        printf("Empty List!!");
        return;
    }
    printf("Position for Element to be deleted : ");
    scanf("%d", &pos);
    if (pos==1)
    {
        ptr = start;
        start = start->next;
        printf("Deleted node %d \n", ptr->info);
        free(ptr);
    }
    else
    {
        ptr = start;
        for (int i = 1; i < pos; i++)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        if(ptr==NULL)
        {
            printf("Deletion not Possible!! \n");
            return;
        }
        temp->next = ptr->next;
        printf("Deleted node %d \n", ptr->info);
        free(ptr);
    }
    display();
}

// Sprting a Linked List
void sort()
{
    Node *temp, *ptr;
    int x;
    temp = start;
    while (temp!=NULL)
    {
        ptr = temp->next;
        while(ptr!=NULL)
        {
            if(temp->info>ptr->info)
            {
                x = temp->info;
                temp->info = ptr->info;
                ptr->info = x;
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
    display();
}

// Inserting an Element into Sorted List
void insertSort()
{
    sort();
    Node *temp, *ptr;
    temp = (Node *)malloc(sizeof(Node));
    printf("Element to be inserted : ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if(start==NULL)
    {
        start = temp;
    }
    else
    {
        Node *current = start;
        while(current->next != NULL && current->next->info < temp->info)
        {
            current = current->next;
        }

        temp->next = current->next;
        current->next = temp;
    }
    display();
}

// Deleting an Element from Sorted List
void deleteSort()
{
    sort();
    Node *temp, *prev;
    temp = start;
    int key, flag=0;
    printf("Element to be Deleted : ");
    scanf("%d", &key);
    if (temp != NULL && temp->info == key)
    { 
        start = temp->next;   
        free(temp);
        flag = 1;
    }  
    while (temp != NULL && temp->info != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
    if (temp == NULL) 
    {
        printf("Element Not Found !! \n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Element %d has been deleted. \n", key);
    display();
    return;
}

// Searching an element
void search()
{
    Node *ptr;
    int key,count=0;
    if(start==NULL)
    {
        printf("List is Empty!!\n");
        return;
    }
    printf("Search Element : ");
    scanf("%d", &key);
    ptr = start;
    while (ptr!=NULL)
    {
        if(ptr->info==key)
        {
            printf("Element Found at Position %d!! \n",count+1);
            return;
        }
        count += 1;
        ptr = ptr->next;
    }
    printf("Element not Found!!\n");
}

// Concatenating two Lists
void concatenate()
{
    Node *ptr, *start2 = NULL, *temp;
    int n, i;

    //Taking input to second list
    printf("Enter the number of elements in second linked list: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        temp = (Node *)malloc(sizeof(Node));
        printf("Enter element: ");
        scanf("%d", &temp->info);
        temp->next = NULL;
        if(start2 == NULL)
        {
            start2 = temp;
            ptr = temp;
        }
        else
        {
            ptr->next = temp;
            ptr = temp;
            temp->next = NULL;
        }
    }

    //Concatenating two list
    if (start == NULL)
    {
        start = start2;
    }
    else
    {
        ptr = start;
        while (ptr->next!=NULL)
            ptr = ptr->next;
        ptr->next = start2;
    }
    display();
}

// Traversing a list to count number of elements
void traverse()
{
    int count = 0;
    Node *ptr = start;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("Number of Elements is %d \n", count);
}

// Main function to implement all operations
void main()
{
    int choice;
    while(1)
    {
        printf("\n--------------------------- \n");
        printf("Available operations are: \n 0. [ EXIT ] \n");
        printf(" 1. Display \n 2. Insert Rare \n 3. Insert Front \n");
        printf(" 4. Insert Position \n 5. Delete Rare \n 6. Delete Front \n");
        printf(" 7. Delete Position \n 8. Sorting \n 9. Insert Sorted \n");
        printf(" 10. Delete Sorted \n 11. Searching \n");
        printf(" 12. Concatenation \n 13. Traversing \n");
        printf("---------------------------\n");
        printf("Enter your choice - ");
        scanf("%d", &choice);
        printf("\n--------------------------- \n");
        switch(choice)
        {
            case 0:
            exit(0);
            case 1:
            display();
            break;
            case 2:
            insertRare();
            break;
            case 3:
            insertFront();
            break;
            case 4:
            insertPos();
            break;
            case 5:
            deleteRare();
            break;
            case 6:
            deleteFront();
            break; 
            case 7:
            deletePos();
            break;
            case 8:
            sort();
            break;
            case 9:
            insertSort();
            break;
            case 10:
            deleteSort();
            break;
            case 11:
            search();
            break;
            case 12:
            concatenate();
            break;
            case 13:
            traverse();
            break;
            default:
            printf("Invalid Input Try again !!\n");
            printf("\n--------------------------- \n");
            continue;
        }
    }
}
