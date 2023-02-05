// Tower of Hanoi

#include<stdio.h>
#include<stdlib.h>

void tower(int n, char s, char t, char d)
{
    if(n==0)
        return;
    tower(n - 1, s, d, t);
    printf("Move disk %d : %c -> %c \n", n, s, d);
    tower(n - 1, t, s, d);
}

void main()
{
    int n;
    printf("Number of Disks : ");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
}