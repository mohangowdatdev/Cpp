#include <stdio.h>
#include <stdlib.h>
int a[10][10], n, m, i, j, source, s[10], vis[10], visited[10], count;

void create()
{
        printf("\nEnter the number of vertices of the digraph: ");
        scanf("%d", &n);
        printf("\nEnter the adjacency matrix of the graph:\n");
        for (i = 1; i <= n; i++)
        {
                vis[i] = 0;
                visited[i] = 0;
                for (j = 1; j <= n; j++)
                {
                        scanf("%d", &a[i][j]);
                }
        }
}

void bfs()
{
        int q[10], u, front = 0, rear = -1;
        printf("\n Enter the source vertex: ");
        scanf("%d", &source);
        q[++rear] = source;
        visited[source] = 1;
        printf("\nThe reachable vertices are: ");
        while (front <= rear)
        {
                u = q[front++];
                for (i = 1; i <= n; i++)
                {
                        if (a[u][i] == 1 && visited[i] == 0)
                        {
                                q[++rear] = i;
                                visited[i] = 1;
                                printf("\n%d", i);
                        }
                }
        }
}

void dfs(int i)
{
        int j;
        printf("\t %d", i);
        vis[i] = 1;
        for (j = 1; j <= n; j++)
                if (a[i][j] == 1 && vis[j] == 0)
                        dfs(j);
}

void main()
{
        int ch;
        create();
        while (1)
        {
                printf("\n1.BFS\n2.DFS\n3.Exit\n");
                printf("\nEnter your choice: ");
                scanf("%d", &ch);
                switch (ch)
                {
                case 1:
                        bfs();
                        break;
                case 2:
                        printf("\n Enter the source vertex: ");
                        scanf("%d", &source);
                        dfs(source);
                        break;
                default:
                        exit(0);
                }
        }
}
