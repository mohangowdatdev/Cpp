#include <stdio.h>
#include <stdlib.h>
int n, m, i, key[20];
int *ht, count = 0, ind;

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
    if (count == 0)
    {
        printf("Empty Table!! \n");
        return;
    }
    for (i = 0; i < m; i++)
    {
        printf("\n T[%d] -> %d", i, ht[i]);
    }
}

int main()
{
    printf("Number of Keys (n) : ");
    scanf("%d", &n);
    printf("Size of hash table (m) : ");
    scanf("%d", &m);
    printf("Enter Key elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &key[i]);
    }
    ht = (int *)malloc(m * sizeof(int));
    for (i = 0; i < m; i++)
    {
        ht[i] = -1;
    }
    for (i = 0; i < n; i++)
    {
        if (count == m)
        {
            printf("Hash Table Fulll!!\n");
            break;
        }
        insert(key[i]);
    }
    display();
}