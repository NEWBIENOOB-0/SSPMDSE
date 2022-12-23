## EXPERIMENT NO 7 A

**Aim: Implementation of Graph Data Structure.(DFS Traversal)**
```c
#include <stdio.h>
#include <conio.h>
#define MAX 6
void dfs(int[MAX][MAX], int[MAX], int);
void main()
{
	int adj[MAX][MAX];
	int visited[MAX] = { 0
	}, i, j;
	clrscr();
	printf("\nenter the adjacency matrix: ");
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			scanf("%d", &adj[i][j]);
		}
	}

	printf("\nDFS Traversal is ");
	dfs(adj, visited, 0);
	printf("\n");
	getch();
}

void dfs(int adj[][MAX], int visited[], int start)
{
	int stack[MAX];
	int tos = -1, i;
	printf("%c ", start + 65);
	visited[start] = 1;
	stack[++tos] = start;
	while (tos != -1)
	{
		start = stack[tos];
		for (i = 0; i < MAX; i++)
		{
			if (adj[start][i] && visited[i] == 0)
			{
				stack[++tos] = i;
				printf("%c ", i + 65);
				visited[i] = 1;
				break;
			}
		}

		if (i == MAX)
			tos--;
	}
}
```
**OUTPUT**
```enter the adjacency matrix: 0
1
1
1
0
0
1
0
0
0
1
1
1
0
0
0
0
1
1
0
0
0
0
0
0
1
0
0
0
0
0
1
1
0
0
0
DFS Traversal is A B E F C D
```
## EXPERIMENT NO 7 B
**Aim: Implementation of Graph Data Structure.(BFS Traversal)**
```c
#include <stdio.h>
#include <conio.h>
#define MAX 6
void bfs(int[MAX][MAX], int[MAX], int);
void main()
{
	int adj[MAX][MAX];
	int visited[MAX] = { 0
	}, i, j;
	clrscr();
	printf("\nenter the adjacency matrix: ");
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			scanf("%d", &adj[i][j]);
		}
	}

	printf("\nBFS Traversal is ");
	bfs(adj, visited, 0);
	printf("\n");
	getch();
}

void bfs(int adj[][MAX], int visited[], int start)
{
	int queue[MAX];
	int rear = -1, front = -1, i;
	queue[++rear] = start;
	visited[start] = 1;
	while (rear != front)
	{
		start = queue[++front];
		printf("%c ", start + 65);
		for (i = 0; i < MAX; i++)
		{
			if (adj[start][i] == 1 && visited[i] == 0)
			{
				queue[++rear] = i;
				visited[i] = 1;
			}
		}
	}
}
```
**OUTPUT**
```
enter the adjacency matrix: 0
1
1
1
0
0
1
0
0
0
1
1
1
0
0
0
0
1
1
0
0
0
0
0
0
1
0
0
0
0
0
1
1
0
0
BFS Traversal is A B C D E F
```
