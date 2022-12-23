**AIM: Implement Stack / Linear Queue ADT using Linked List.**
```c
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str[80];
	int i, tos = -1, n, x = 0, y = 0, stack[80];
	clrscr();
	printf("\nenter the valid postfix notation: ");
	gets(str);
	n = strlen(str);
	printf("\nthe value of postfix notation is: ");
	for (i = 0; i < n; i++)
	{
		switch (str[i])
		{
			case '+':
				y = stack[tos];
				x = stack[tos - 1];
				tos = tos - 1;
				x = x + y;
				stack[tos] = x;
				break;
			case '-':
				y = stack[tos];
				x = stack[tos - 1];
				tos = tos - 1;
				x = x - y;
				stack[tos] = x;
				break;
			case '*':
				y = stack[tos];
				x = stack[tos - 1];
				tos = tos - 1;
				x = x * y;
				stack[tos] = x;
				break;
			case '/':
				y = stack[tos];
				x = stack[tos - 1];
				tos = tos - 1;
				x = x / y;
				stack[tos] = x;
				break;
			default:
				tos = tos + 1;
				if (str[i] >= 48 && str[i] <= 57)
					x = str[i] - 48;
				stack[tos] = x;
				x = 0;
		}
	}

	printf("\n %d ", stack[tos]);
	getch();
}
```
**OUTPUT**
```
enter the valid postfix notation: 562+*
the value of postfix notation is:
40
```
