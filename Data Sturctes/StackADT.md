**AIM: Implement Stack ADT using array.**
```c
#include <stdio.h>
#include <conio.h>
#define max 10
int stack[max], tos;
void push();
void pop();
void display();
void main()
{
	int ch;
	clrscr();
	tos = -1;
	printf("Stack operation");
	while (ch != 4)
	{
		printf("\n1. PUSH \t 2. POP \t 3. DISPLAY 4. EXIT ");
		scanf("%d", &ch);
		switch (ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Enter Correct choice");
		}
	}

	getch();
}

void push()
{
	int no;
	if (tos == max - 1)
		printf("Stack overflow");
	else
	{
		tos++;
		printf("Enter element ");
		scanf("%d", &no);
		stack[tos] = no;
		printf("Node Inserted");
	}
}

void pop()
{
	if (tos == -1)
		printf("Stack underflow");
	else
	{
		printf("Element %d is pop", stack[tos]);
		tos--;
	}
}

void display()
{
	int i;
	if (tos == -1)
		printf("Stack is empty");
	else
		for (i = tos; i >= 0; i--)
			printf("\nElement= %d", stack[i]);
}
```
**OUTPUT**
```
Stack operation
1. PUSH 2. POP 3. DISPLAY 4. EXIT 3
Stack is empty
1. PUSH 2. POP 3. DISPLAY 4. EXIT 2
Stack underflow
1. PUSH 2. POP 3. DISPLAY 4. EXIT 1
Enter element 11
Node Inserted
1. PUSH 2. POP 3. DISPLAY 4. EXIT 1
Enter element 22
Node Inserted
1. PUSH 2. POP 3. DISPLAY 4. EXIT 1
Enter element 33
Node Inserted
1. PUSH 2. POP 3. DISPLAY 4. EXIT 3
Element= 33
Element= 22
Element= 11
1. PUSH 2. POP 3. DISPLAY 4. EXIT 2
Element 33 is pop
1. PUSH 2. POP 3. DISPLAY 4. EXIT 3
Element= 22
Element= 11
1. PUSH 2. POP 3. DISPLAY 4. EXIT 2
Element 22 is pop
1. PUSH 2. POP 3. DISPLAY 4. EXIT 3
Element= 11
1. PUSH 2. POP 3. DISPLAY 4. EXIT 2
Element 11 is pop
1. PUSH 2. POP 3. DISPLAY 4. EXIT 3
Stack is empty
1. PUSH 2. POP 3. DISPLAY 4. EXIT 4
```
