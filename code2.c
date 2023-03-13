#include <stdio.h>
#include <stdlib.h>

int n, i, j, a[10][10], vis2[10], vis1[10];

void create()
{
    printf("Number of Elements : ");
    scanf("%d", &n);
    printf("Adjacency Matrix : ");
    for (int i = 1; i <= n; i++)
    {
        vis1[i] = 0;
        vis2[i] = 0;
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void bfs(int src)
{
    int q[10], f = 0, r = -1, u;
    q[++r] = src;
    vis1[src] = 1;
    while (f <= r)
    {
        u = q[f++];
        for (int i = 1; i <= n; i++)
        {
            if (a[u][i] == 1 && vis1[i] == 0)
            {
                q[++r] = i;
                vis1[i] = 1;
                printf("%d \t", i);
            }
        }
    }
}

void dfs(int src)
{
    printf("%d \t", src);
    vis2[src] = 1;
    for (i = 1; i <= n; i++)
    {
        if (a[src][i] == 1 && vis2[i] == 0)
        {
            dfs(i);
        }
    }
}

void main()
{
    int ch, source;
    create();
    while (1)
    {
        printf("\n\n1. BFS \n2. DFS\n3. Exit\nYour choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Source : ");
            scanf("%d", &source);
            bfs(source);
            break;
        case 2:
            printf("Source : ");
            scanf("%d", &source);
            dfs(source);
            break;
        default:
            exit(0);
        }
    }
}