// POSTFIX Evaluation

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define MAX 50

double opr1, opr2, res, stack[MAX];
char symb, postfix[MAX];
int top = -1;

void push(double symb)
{
    if(top == MAX-1)
    {
        printf("Full Stack !! \n");
        exit(0);
    }
    stack[++top] = symb;
}

double pop()
{
    if(top==-1)
    {
        printf("Empty Stack !! \n");
        exit(0);
    }
    return (double)stack[top--];
}

double operation()
{
    switch (symb)
    {
    case '+': return (opr1 + opr2);
    case '-': return (opr1 - opr2);
    case '*': return (opr1 * opr2);
    case '/': return (opr1 / opr2);
    case '^': return pow(opr1,opr2);
    case '%': return ((int)opr1 % (int)opr2);    
    default: printf("Invalid Operator !! \n"); exit(0);
    }
}

void main()
{
    printf("Expression : ");
    scanf("%s", postfix);
    for (int i = 0; i < strlen(postfix); i++)
    {
        symb = postfix[i];
        if(isdigit(symb))
        {
            push(symb - '0');
        }
        else 
        {
            opr2 = pop();
            opr1 = pop();
            res = operation();
            push(res);
        }
    }
    res = pop();
    printf("Result = %0.2lf", res);
}
