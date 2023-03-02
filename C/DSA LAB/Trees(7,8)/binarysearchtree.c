/*Binary Search Tree Program*/
#include<stdio.h>
#include<stdlib.h>
int a[25], n, i;

typedef struct tree
{
    int data;
    struct tree *lchild, *rchild;
} node;

node *root = NULL;

void printarray()
{
    printf("Elements Entered : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}

node* tempcreate(int val)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = val;
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}

void insert(node *root,node *newnode)
{
    if(newnode->data < root->data)
    {
        if(root->lchild==NULL)
        {
            root->lchild = newnode;
        }
        else
        {
            insert(root->lchild, newnode);
        }
    }    
    else if(newnode->data > root->data)
    {
        if(root->rchild==NULL)
        {
            root->rchild = newnode;
        }
        else
        {
            insert(root->rchild, newnode);
        }
    }
    else
    {
        return;
    }
}

void create()
{
    node *newnode;
    printf("Number of elements : ");
    scanf("%d", &n);
    printf("Elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        newnode = tempcreate(a[i]);
        if(root==NULL)
        {
            root = newnode;
        }
        else
        {
            insert(root, newnode);
        }
    }
    printf("\n");
}

void inorder(node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->lchild);
        printf("%d\t", temp->data);
        inorder(temp->rchild);
    }
}

void preorder(node *temp)
{
    if(temp!=NULL)
    {
        printf("%d\t", temp->data);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}

void postorder(node *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->lchild);
        postorder(temp->rchild);
        printf("%d\t", temp->data);
    }
}

void main()
{
    int choice;
    create();
    while(1)
    {
        printf("\n==========================\n");
        printf("Main menu :\n0.Exit\n1.Array\n2.InOrder\n");
        printf("3.Preorder\n4.Postorder\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);
        printf("------------\n");
        switch(choice)
        {
            case 0: exit(0); 
            case 1: printarray(); printf("\n"); break;
            case 2: printf("Inorder : \n"); inorder(root); printf("\n"); break;
            case 3: printf("Preorder : \n"); preorder(root); printf("\n"); break;
            case 4: printf("Postorder : \n"); postorder(root); printf("\n"); break;
            default: printf("Invalid Choice~~\n"); break;
        }
    }
}
