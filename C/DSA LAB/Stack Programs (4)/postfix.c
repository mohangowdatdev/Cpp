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

void push(double sym)
{
    if(top == MAX-1)
    {
        printf("Full Stack !! \n");
        exit(0);
    }
    stack[++top] = sym;
}

double pop()
{
    if(top==-1)
    {
        printf("Empty Stack !! \n");
        exit(0);
    }
    double a = stack[top--];
    return a;
}

double operation(char sym, double op1, double op2)
{
    switch (sym)
    {
    case '+':
        return (op1 + op2);
    case '-':
        return (op1 - op2);
    case '*':
        return (op1 * op2);
    case '/':
        return (op1 / op2);
    case '^':
        return pow(op1,op2);
    case '%':
        return ((int)op1 % (int)op2);    
    default:
        printf("Invalid Operator !! \n");
        exit(0);
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
            res = operation(symb, opr1, opr2);
            push(res);
        }
    }
    res = pop();
    printf("Result = %0.2lf", res);
}
