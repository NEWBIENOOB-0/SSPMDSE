**AIM:Implement Doubly Linked List ADT.**
```c
#include <stdio.h>
#include <conio.h>
#include <alloc.h>

typedef struct emp_data
{
	int info;
	struct emp_data *next, *prev;
}

emp;
emp *node, *list = NULL, *temp;
void InsertBeg();
void DeleteBeg();
void InsertEnd();
void DeleteEnd();
void Display();
void main()
{
	int opt = 0;
	clrscr();
	while (opt != 6)
	{
		printf("\n*****MAIN-MENU*****");
		printf("\n1.INSERT NODE AT BEGINNING");
		printf("\n2.INSERT NODE AT END");
		printf("\n3.DELETE NODE FROM BEGINNING");
		printf("\n4.DELETE NODE FROM END");
		printf("\n5.DISPLAY OPERATION");
		printf("\n6.EXIT");
		printf("\nEnter your option: ");
		scanf("%d", &opt);
		switch (opt)
		{
			case 1:
				InsertBeg();
				break;
			case 2:
				InsertEnd();
				break;
			case 3:
				DeleteBeg();
				break;
			case 4:
				DeleteEnd();
				break;
			case 5:
				Display();
				break;
			case 6:
				exit(0);
			default:
				printf("\nenter proper option.....");
		}
	}

	printf("\nprogram exits here.....");
	getch();
}

void InsertBeg()
{
	node = (emp*) malloc(1* sizeof(emp));
	node->next = NULL;
	node->prev = NULL;
	printf("\nenter info: ");
	scanf("%d", &node->info);
	if (list == NULL)
	{
		list = node;
	}
	else
	{
		list->prev = node;
		node->next = list;
		list = node;
	}
}

void DeleteBeg()
{
	if (list == NULL)
	{
		printf("\nLIST IS AN EMPTY....");
	}
	else
	{
		node = list;
		printf("\nthe element deleted is: %d", list->info);
		list = list->next;
		if (list != NULL)
			list->prev = NULL;
		free(node);
	}
}

void InsertEnd()
{
	node = (emp*) malloc(1* sizeof(emp));
	node->next = NULL;
	node->prev = NULL;
	printf("\nenter info: ");
	scanf("%d", &node->info);
	temp = list;
	if (temp == NULL)
	{
		list = node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = node;
		node->prev = temp;
	}
}

void DeleteEnd()
{
	temp = list;
	if (temp == NULL)
	{
		printf("\nLIST IS EMPTY...");
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		if (temp->prev != NULL)
		{
			printf("\nelement deleted is: %d", temp->info);
			(temp->prev)->next = NULL;
		}
		else
		{
			printf("\nelement deleted is: %d", list->info);
			list = NULL;
		}
	}
}

void Display()
{
	temp = list;
	if (temp == NULL)
	{
		printf("\nEMPTY LINKED LIST...");
	}
	else
	{
		printf("\nLIST INCLUDES: ");
		while (temp != NULL)
		{
			printf(" %d", temp->info);
			temp = temp->next;
		}
	}
}
```
**OUTPUT**
