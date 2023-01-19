**Program 6 : WAP for Character Generation using Bit Map method**
```c
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
            int gd,gm,i,j;

            /* Save character map of letter A */
           // You can make your changes in the below array
            int a[13][9] = {
                                    { 0, 0, 0, 0, 1, 0, 0, 0, 0},
                                    { 0, 0, 0, 1, 0, 1, 0, 0, 0},
                                    { 0, 0, 1, 0, 0, 0, 1, 0, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 1, 1, 1, 1, 1, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                              };

            /* Initialise graphics mode */
            detectgraph(&gd,&gm);
	    initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
           
            for(i=0;i<13;i++)
	    {
                        for(j=0;j<9;j++)
                        {
                                    putpixel(200+j,200+i,15*a[i][j]);
                        }
            }
            getch();
            closegraph();
}
```
**OUTPUT**

## part 2
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int i,j,k,x,y;
    int gd=DETECT,gm;//DETECT is macro defined in graphics.h
    /* ch1 ch2 ch3 ch4 are character arrays that display alphabets */
    int ch1[][10]={ {1,1,1,1,1,1,1,1,1,1},
		    {1,1,1,1,1,1,1,1,1,1},
		    {1,1,0,0,0,0,0,0,0,0},
		    {1,1,0,0,0,0,0,0,0,0},
		    {1,1,1,1,1,1,1,1,1,1},
		    {1,1,1,1,1,1,1,1,1,1},
		    {0,0,0,0,0,0,0,0,1,1},
		    {0,0,0,0,0,0,0,0,1,1},
		    {1,1,1,1,1,1,1,1,1,1},
		    {1,1,1,1,1,1,1,1,1,1}};
    int ch2[][10]={ {0,0,0,1,1,1,1,0,0,0},
		    {0,0,1,1,1,1,1,1,0,0},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {0,0,1,1,1,1,1,1,0,0},
		    {0,0,0,1,1,1,1,0,0,0}};
    int ch3[][10]={ {1,1,1,1,1,1,1,1,1,1},
		    {1,1,1,1,1,1,1,1,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,1,1,1,1,1,1,1,1},
		    {1,1,1,1,1,1,1,1,1,1},
		    {1,1,0,0,0,0,0,0,0,0},
		    {1,1,0,0,0,0,0,0,0,0},
		    {1,1,0,0,0,0,0,0,0,0},
		    {1,1,0,0,0,0,0,0,0,0}};
    int ch4[][10]={ {1,1,1,0,0,0,0,1,1,1},
		    {1,1,1,1,0,0,1,1,1,1},
		    {1,1,0,1,1,1,1,0,1,1},
		    {1,1,0,0,1,1,0,0,1,1},
		    {1,1,0,0,1,1,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1},
		    {1,1,0,0,0,0,0,0,1,1}};
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");//initialize graphic mode
    setbkcolor(LIGHTGRAY);//set color of background to darkgray
    for(k=0;k<4;k++)
    {
	for(i=0;i<10;i++)
	{
	    for(j=0;j<10;j++)
	    {
		if(k==0)
		{
		    if(ch1[i][j]==1)
		    putpixel(j+250,i+230,RED);
		}
		if(k==1)
		{
		    if(ch1[i][j]==1)
		    putpixel(j+300,i+230,RED);
		}
		if(k==2)
		{
		    if(ch3[i][j]==1)
		    putpixel(j+350,i+230,RED);
		}
		if(k==3)
		{
		    if(ch4[i][j]==1)
		    putpixel(j+400,i+230,RED);
		}
	    }
	    delay(200);
	}
    }
    getch();
    closegraph();
}
```
