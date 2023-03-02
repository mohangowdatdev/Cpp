#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char item)
{
    if(top >= MAX_SIZE-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top = top+1;
        stack[top] = item;
    }
}

char pop()
{
    char item;
    if(top < 0)
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
    {
        item = stack[top];
        top = top-1;
        return item;
    }
}

int priority(char symbol)
{
    if(symbol == '^')
    {
        return 3;
    }
    else if(symbol == '*' || symbol == '/')
    {
        return 2;
    }
    else if(symbol == '+' || symbol == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void infixToPrefix(char infix[], char prefix[])
{
    int i, j = 0;
    int len = strlen(infix);
    char item;

    for(i=len-1; i>=0; i--)
    {
        item = infix[i];

        if(isalnum(item))
        {
            prefix[j] = item;
            j++;
        }
        else if(item == ')')
        {
            push(item);
        }
        else if(item == '(')
        {
            while(stack[top] != ')')
            {
                prefix[j] = pop();
                j++;
            }
            pop();
        }
        else
        {
            while(priority(stack[top]) >= priority(item))
            {
                prefix[j] = pop();
                j++;
            }
            push(item);
        }
    }

    while(top != -1)
    {
        prefix[j] = pop();
        j++;
    }

    prefix[j] = '\0';
    strrev(prefix);
}

int main()
{
    char infix[MAX_SIZE], prefix[MAX_SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
