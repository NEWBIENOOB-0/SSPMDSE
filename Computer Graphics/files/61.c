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
