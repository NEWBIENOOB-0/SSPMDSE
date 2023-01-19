**Program 2: WAP to implement Bresenham’s Line Drawing Algorithm.**
```c
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gdriver = DETECT,gmode;

int x,y,p,dx,dy,x1,x2,y1,y2	;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	printf(" Enter x1,Y1-");
	scanf("%d%d",&x1,&y1);
	printf(" Enter x2,Y2-");
	scanf("%d%d",&x2,&y2);
	x=x1;
	y=y1 ;
	dx=x2-x1;
	dy=y2-y1;
	//putpixel(x,y,2);
	p=((2*dy)-dx);
       while(x<=x2)
	{
	  if(p>=0)
	  {

	    putpixel(x,y,7);
	    y=y+1;
	    p=p+2*dy-2*dx;
	   }
	  else
	  {
	   putpixel(x,y,7);
	   //y=y+1;
	   p=p+2*dy;
	   }
	   x=x+1;
	}
	getch();
	closegraph();
}
```
**OUTPUT**
