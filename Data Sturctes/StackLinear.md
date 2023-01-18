**AIM: 6A] Implement Stack ADT using Linked List.**
```c
#include <stdio.h>
#include <conio.h>
#include <alloc.h>

typedef struct stack_data
{
	int no;
	struct stack_data * next;
}

stack;
stack *tos, *node, *list;
void push();
void pop();
void display();
void main()
{
	int ch = 0;
	clrscr();
	while (ch != 4)
	{
		//clrscr();
		printf("\n****MAIN MENU****");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nEnenter Your Choice: ");
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
				printf("\nEnenter Proper Choice..");
		}
	}

	printf("\nprogram exits here..");
}

void push()
{
	node = (stack*) malloc(1* sizeof(stack));
	node->next = NULL;
	printf("\nenenter integer value: ");
	scanf("%d", &node->no);
	if (tos == NULL)
	{
		tos = node;
	}
	else
	{
		node->next = tos;
		tos = node;
	}

	printf("\none element is pushed into stack..");
}

void pop()
{
	if (tos == NULL)
	{
		printf("\nstack is an empty..");
	}
	else
	{
		node = (stack*) malloc(1* sizeof(stack));
		node->next = NULL;
		node = tos;
		tos = tos->next;
		free(node);
		printf("\none element is pop out from stack");
	}
}

void display()
{
	if (tos == NULL)
	{
		printf("\nstack is an empty");
	}
	else
	{
		printf("\nstck elements are...\n");
		list = tos;
		while (list != NULL)
		{
			printf("\n%d", list->no);
			list = list->next;
		}
	}
}
```

**OUTPUT**
```
****MAIN MENU****
1.PUSH
2.POP
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter integer value: 10
one element is pushed into stack..
****MAIN MENU****
1.PUSH
2.POP
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter integer value: 20
one element is pushed into stack..
****MAIN MENU****
1.PUSH
2.POP
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter integer value: 30
one element is pushed into stack..
****MAIN MENU****
1.PUSH
2.POP
3.DISPLAY
4.EXIT
Enter Your Choice: 3
stack elements are...
30
20
10
****MAIN MENU****
1.PUSH
2.POP
3.DISPLAY
4.EXIT
Enter Your Choice: 2
one element is pop out from stack
****MAIN MENU****
1.PUSH
2.POP
3.DISPLAY
4.EXIT
Enter Your Choice: 3
stack elements are...
20
10
```


## part 2

**AIM: 6B] Implement Linear Queue ADT using Linked List.**
```c
#include <stdio.h>
#include <conio.h>
#include <alloc.h>

typedef struct queue_data
{
	int no;
	struct queue_data * next;
}

queue;
queue *front, *rear, *node, *list;
void insert();
void delet();
void display();
void main()
{
	int ch = 0;
	clrscr();
	while (ch != 4)
	{
		//clrscr();
		printf("\n****MAIN MENU****");
		printf("\n1.INSERT");
		printf("\n2.DELETE");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nEnenter Your Choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delet();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("\nEnenter Proper Choice..");
		}
	}

	printf("\nprogram exits here..");
}

void insert()
{
	node = (queue*) malloc(1* sizeof(queue));
	node->next = NULL;
	printf("\nenenter integer value: ");
	scanf("%d", &node->no);
	if (front == NULL && rear == NULL)
	{
		front = node;
		rear = node;
	}
	else
	{
		rear->next = node;
		rear = node;
	}

	printf("\none element is inserted");
}

void delet()
{
	if (front == NULL && rear == NULL)
	{
		printf("\nqueue is an empty..");
	}
	else
	{
		node = (queue*) malloc(1* sizeof(queue));
		node->next = NULL;
		node = front;
		front = front->next;
		free(node);
		printf("\none element is deleted..");
	}
}

void display()
{
	if (front == NULL)
	{
		printf("\nqueue is an empty");
	}
	else
	{
		printf("\nqueues elements are...\n");
		list = front;
		while (list != NULL)
		{
			printf("%d ", list->no);
			list = list->next;
		}
	}
}
```
**OUTPUT**
```
****MAIN MENU*****
1.INSERT
2.DELETE
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter integer value: 11
one element is inserted
****MAIN MENU****
1.INSERT
2.DELETE
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter integer value: 22
one element is inserted
****MAIN MENU****
1.INSERT
2.DELETE
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter integer value: 33
one element is inserted
****MAIN MENU****
1.INSERT
2.DELETE
3.DISPLAY
4.EXIT
Enter Your Choice: 3
queues elements are...
11 22 33
****MAIN MENU****
1.INSERT
2.DELETE
3.DISPLAY
4.EXIT
Enter Your Choice: 2
one element is deleted..
****MAIN MENU****
1.INSERT
2.DELETE
3.DISPLAY
4.EXIT
Enter Your Choice: 3
queues elements are...
22 33
```
