#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#define max 20
int arr[max];
int top=-1;
void push(int ele);
int pop();
void infixtopostfix(char infix[50]);
int precedence(char ch);
int main()
{
    char s[max];
    printf("enter the expression:");
    gets(s);
    infixtopostfix(s);
}
void infixtopostfix(char infix[50]){
    int i,j=0;
    char postfix[50],ch;
    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if(isalnum(ch))
        {
            postfix[j++]=ch;
        }
        else if(ch=='(')
        push(ch);
        else if(ch==')')
        {
            ch=pop();
            while(ch!='(')
            {
                postfix[j++]=ch;
                ch=pop();
            }
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^')
        {
            if(top>=0)
            {
                while(precedence(arr[top])>=precedence(ch))
                postfix[j++]=pop();
            }
            push(ch);
        }
        else
        {
            printf("\nERROE 404\n");
        }
    }
    while(top!=-1)
    {
        postfix[j++]=pop();
        postfix[j]='\0';
    }
    printf("\nthe postfix expression is %s\n",postfix);
}
int precedence(char ch){
    switch(ch)
    {
        case '^':return 3;
                break;
        case '*':return 2;
                break;
        case '/':return 2;
                break;
        case '%':return 2;
                break;
        case '+':return 1;
                break;
        case '-':return 1;
                break;
        default:return 0;
    }
}
void push(int ele){
    if(top>=max-1)
    {
        printf("\nstack is full\n");
        exit(1);
    }
    else
    {
        top=top+1;
        arr[top]=ele;
    }
}
int pop()
{
    int ele;
    if(top<=-1)
    {
        printf("\nstack is empty\n");
        return -1;
    }
    else
    {
        ele=arr[top];
        top=top-1;;
    }
    return ele;
}
