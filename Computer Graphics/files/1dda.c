#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{

int i,steps,x1,x2,y1,y2;
float x,y,xinc,yinc,dx,dy;
char msg[86];
int gdriver = DETECT,gmode,errorcode;
clrscr();
initgraph(&gdriver,&gmode,"f:\\tc");
printf("\n Enter the co ordinates ");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
cleardevice();
outtextxy(200,4,"Draw Using DDA");
line(x1,x2,y1,y2);
dx = x2 - x1;
dy = y2 - y1;
if(abs(dx) > abs(dy))
steps = abs(dx);
else
steps = abs(dy);
xinc = (float)dx/steps ;
yinc = (float)dy/steps ;
y = y1;
x = x1;
putpixel(ceil(x),ceil(y),20);
for(i = 0;i <= steps ;i++)
{
x += xinc ;
y += yinc ;
putpixel(x,y,2);
delay(45);
}
getch();

}
