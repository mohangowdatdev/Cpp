#include <stdio.h>
#include <stdlib.h>

int key[20], n, m;
int *ht, ind;
int count = 0;

void insert(int key)
{
    ind = key % m;
    while (ht[ind] != -1)
    {
        ind = (ind + 1) % m;
    }
    ht[ind] = key;
    count++;
}

void display()
{
    int i;
    if (count == 0)
    {
        printf("\nHash Table is empty!!\n");
        return;
    }
    printf("\nHash Table contents are:\n ");
    for (i = 0; i < m; i++)
        printf("\n T[%d] --> %d ", i, ht[i]);
}

int main()
{
    int i;
    printf("\nNumber of elements (N) :   ");
    scanf("%d", &n);
    printf("\nSize of Hash Table (m) :   ");
    scanf("%d", &m);
    ht = (int *)malloc(m * sizeof(int));
    for (i = 0; i < m; i++)
        ht[i] = -1;
    printf("\nKey Values / Elements (key) : \n");
    for (i = 0; i < n; i++)
        scanf("%d", &key[i]);
    for (i = 0; i < n; i++)
    {
        if (count == m)
        {
            printf("\nHash table is full.\n");
            break;
        }
        insert(key[i]);
    }
    display();
    return 0;
}
