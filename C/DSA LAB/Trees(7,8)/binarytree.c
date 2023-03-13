#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

Node *createTree(int arr[], int i, int n)
{
    if (i >= n)
    {
        return NULL;
    }
    Node *root = newNode(arr[i]);
    root->left = createTree(arr, 2 * i + 1, n);
    root->right = createTree(arr, 2 * i + 2, n);
    return root;
}

void printLevel(Node *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (level == 1)
    {
        printf("%d ", root->data);
    }
    else if (level > 1)
    {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}

int getHeight(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    else
    {
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        if (leftHeight > rightHeight)
        {
            return (leftHeight + 1);
        }
        else
        {
            return (rightHeight + 1);
        }
    }
}

void printTree(Node *root)
{
    int height = getHeight(root);
    int i;
    for (i = 1; i <= height; i++)
    {
        printLevel(root, i);
        printf("\n");
    }
}

int main()
{
    int n, i, arr[20];
    printf("Number of Elements : ");
    scanf("%d", &n);
    printf("Elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Node *root = createTree(arr, 0, n);
    printf("Level order traversal of binary tree is:\n");
    printTree(root);
    return 0;
}
