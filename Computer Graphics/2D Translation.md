**Program 3 : WAP to implement 2D Translation**
```c
#include <conio.h > #include <graphics.h > 
#include <stdio.h>

void main()
{
	int gd = DETECT, gm;
	// declaring two array
	// Translation vector already initialized int l[2][2],v[2]={90,75},i=0,j;
	clrscr();
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("Enter the initial and final coordinates of a line");

	// Getting input from user, having 2D array where 1st row represents initial point
	// And Second row represents final coordinate

	while (i < 2)
	{
		printf("x%d and y%d = ", i, i);
		j = 0;
		scanf("%d", &l[i][j]);
		scanf("%d", &l[i][j + 1]);
		i++;
	}

	// Line before translation line(l[0][0],l[0][1],l[1][0],l[1][1]);
	setcolor(BLUE);
	// Line after translation line(l[0][0]+v[0],l[0][1]+v[1],l[1][0]+v[0],l[1][1]+
	v[1]);	// Adding Translation vector in it to change the position

getch();

closegraph();
}
```

**OUTPUT**
