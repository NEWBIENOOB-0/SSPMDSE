**AIM: Convert an Infix expression to Postfix expression using stack ADT.**
```c
#include<stdio.h>
#include<conio.h>
#include<string.h>
char stack[30];

int tos=-1;

void itop(char*);
void push(char);
char pop();

void main()
{
	char infix[30];
	clrscr();
	printf("\nenter the prefix expression: ");
	gets(infix);
	itop(infix);
	getch();
}
void push(char sym)
{
	if(tos>=29)
	{
		printf("\nstack overflow..");
		// getch();
		// return;
	}
	else
	{
		tos=tos+1;
		stack[tos]=sym;
	}
}
char pop()
{
	char i;
	if(tos==-1)
	{
		printf("\nstack underflow..");
		// getch();
		// return;
	}
	else
	{
		i=stack[tos];
		tos=tos-1;
	}
	return i;
}
int prec(char ch)
{
	if(ch=='^')
	{
		return 5;
	}
	else if(ch=='*' || ch=='/')
	{
		return 4;
	}
	else if(ch=='+' || ch=='-')
	{
		return 3;
	}
	else
	{
		return 2;
	}
}
void itop(char infix[])
{
	int length;
	static int index=0,pos=0;
	char symbol,temp;
	char postfix[50];
	length=strlen(infix);
	while(index<length)
	{
		symbol=infix[index];
		switch(symbol)
		{
			case '(':push(symbol);
			break;
			case ')':temp=pop();
			while(temp!='(')
			{	
				postfix[pos]=temp;
				pos++;	
				temp=pop();
			}
			break;
			case '+':
			case '-':
			case '*':
			case '/':
			while(prec(stack[tos]) >= prec(symbol))
			{
				temp=pop();
				postfix[pos]=temp;
				pos++;
			}
			push(symbol);
			break;
			default: postfix[pos++]=symbol;
			break;
		}
		index++;
	}
	while(tos>=0)
	{
		temp=pop();
		postfix[pos++]=temp;
	}
	postfix[pos++]='\0';
	puts(postfix);
	return;
}
```
**OUTPUT**
```
enter the prefix expression: a+b
ab+
enter the prefix expression: A+B*C
ABC*+
enter the prefix expression: (a+b)*c
ab+c*
```
