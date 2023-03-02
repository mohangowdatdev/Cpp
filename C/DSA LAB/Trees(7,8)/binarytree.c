#include <stdio.h>
#include <stdlib.h>

// Define a node of the binary tree
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Create a new node with the given data
struct node* newNode(int data) {
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

// Create a binary tree from an array
struct node* createTree(int arr[], int i, int n) {
    // Base case for recursion
    if (i >= n) {
        return NULL;
    }

    // Create the root node
    struct node* root = newNode(arr[i]);

    // Recursively create the left and right subtrees
    root->left = createTree(arr, 2*i+1, n);
    root->right = createTree(arr, 2*i+2, n);

    return root;
}

// Print the nodes at a given level
void printLevel(struct node* root, int level) {
    if (root == NULL) {
        return;
    }
    if (level == 1) {
        printf("%d ", root->data);
    } else if (level > 1) {
        printLevel(root->left, level-1);
        printLevel(root->right, level-1);
    }
}

// Get the height of the tree
int getHeight(struct node* node) {
    if (node == NULL) {
        return 0;
    } else {
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        if (leftHeight > rightHeight) {
            return (leftHeight + 1);
        } else {
            return (rightHeight + 1);
        }
    }
}

// Perform level order traversal
void printTree(struct node* root) {
    int height = getHeight(root);
    int i;
    for (i = 1; i <= height; i++) {
        printLevel(root, i);
        printf("\n");
    }
}

// Driver code
int main() {
    int n, i, arr[20];
    printf("Number of Elements : ");
    scanf("%d", &n);
    printf("Elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    struct node* root = createTree(arr, 0, n);
    printf("Level order traversal of binary tree is:\n");
    printTree(root);
    return 0;
}
