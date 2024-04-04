#include <stdio.h>
#include <ctype.h>
#define size 100

int stack[size];
int top = -1;

void push(int e);
int pop(void);
int main()
{
    char pe[30];
    int i,v,op1,op2;
    printf("\n Enter any postfix expression:");
    gets(pe);
    for (i=0; pe[i] != '\0'; i++)
    {
        if (isalpha(pe[i]))
        {
            printf("\n Enter value for %c",pe[i]);
            scanf("%d",&v);
            push(v);
        }
        else if( isdigit(pe[i]))
            push(pe[i] - '0');
        else
        {
            op2 = pop();
            op1 = pop();
            switch (pe[i])
            {
                case '+':
                    push(op1 + op2);
                    break;
                case '-':
                    push(op1 - op2);
                    break;
                case '*':
                    push(op1 * op2);
                    break;
                case '/':
                    push(op1 / op2);
                    break;
                case '5':
                    push(op1 % op2);
                    break;
                case '^':
                    push(op1 ^ op2);
                    break;
                default:
                    printf("\n Invalid Operation");
            }
        }
    }
    printf("The result is %d",stack[top]);
}

void push(int e)
{
    if (top == size-1)
        printf("\n stack is full");
    else
        stack[++top] = e;
}
void pop()
{
    if (top == -1)
        printf("\n stack is empty");
    else
    return stack[top--];
}
