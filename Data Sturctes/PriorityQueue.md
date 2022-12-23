**AIM: Implement Priority Queue ADT using array.**
```c
#include<stdio.h>
#include<conio.h>
#include<alloc.h>

typedef struct queue_data
{
	int no;
	int pri;
	struct queue_data *next;
}queue;
queue *front,*rear,*node,*list;

void enque();
void deque();
void display();

void main()
{
	int ch=0;
	clrscr();
	while(ch!=4)
	{
		//clrscr();
		printf("\n****MAIN MENU****");
		printf("\n1.ENQUEUE");
		printf("\n2.DEQUEUE");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nEnter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enque();
			break;
			case 2: deque();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			default:printf("\nEnter Proper Choice..");
		}
	}
	printf("\nprogram exits here..");
}
void enque()
{
	int v,p;
	node=(queue*)malloc(1*sizeof(queue));
	node->next=NULL;
	printf("\nenter value to be added into queue: ");
	scanf("%d",&v);
	printf("\nenter its priority: ");
	scanf("%d",&p);
	node->no=v;
	node->pri=p;
	if( front==NULL || p<front->pri )
	{
		node->next=front;
		front=node;
	}
	else
	{
		rear=front;
		while(rear->next!=NULL && rear->next->pri<=p)
		rear=rear->next;
		node->next=rear->next;
		rear->next=node;
	}
	printf("\none element is inserted");
}
void deque()
{
	if(front==NULL)
	{
		printf("\nqueue is an empty..");
	}
	else
	{
		node=(queue*)malloc(1*sizeof(queue));
		node->next=NULL;
		node=front;
		front=front->next;
		free(node);
		printf("\none element is deleted..");
	}
}
void display()
{
	if(front==NULL)
	{
		printf("\nqueue is an empty");
	}
	else
	{
		printf("\nqueues elements are...\n");
		list=front;
		while(list!=NULL)
	{
	printf("%d %d--",list->pri,list->no);
	list=list->next;
}
```
**OUTPUT**
```
****MAIN MENU****
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter value to be added into queue: 11
enter its priority: 1
one element is inserted
****MAIN MENU****
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter value to be added into queue: 22
enter its priority: 2
one element is inserted
****MAIN MENU****
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter value to be added into queue: 33
enter its priority: 3
one element is inserted
****MAIN MENU****
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
Enter Your Choice: 3
queues elements are...
1 11- - 2 22 - - 3 33- -
****MAIN MENU****
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
Enter Your Choice: 1
enter value to be added into queue: 15
enter its priority: 1
one element is inserted
****MAIN MENU****
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
Enter Your Choice: 3
queues elements are...
1 11- - 1 15- -2 22 - - 3 33- -
****MAIN MENU****
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
Enter Your Choice: 2
one element is deleted..
****MAIN MENU****
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
Enter Your Choice: 3
queues elements are...
1 15- -2 22 - - 3 33- -
```
