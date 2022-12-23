**PROGRAM 1 : To write a C program to draw a line using DDA Algorithm.**

```c
#include <stdio.h > 
#include <conio.h >
#include <stdlib.h > 
#include <graphics.h > 
void main()

{
	int i, steps, x1, x2, y1, y2;
	float x, y, xinc, yinc, dx, dy;
	char msg[86];
	int gdriver = DETECT, gmode, errorcode;
	clrscr();
	initgraph(&amp; gdriver, &amp; gmode, &quot; f: \\tc &quot;);
	printf(&quot;\ n Enter the co ordinates &quot;);
	scanf(&quot; % d % d % d % d &quot;, &amp; x1, &amp; x2, &amp; y1, &amp; y2);
	cleardevice();
	outtextxy(200, 4, &quot; Draw Using DDA &quot;);
	line(x1, x2, y1, y2);
	dy = y2 - y1;

	if (abs(dx) &gt; abs(dy)) {}
	else
		steps = abs(dx);

	steps = abs(dy);
	xinc = (float) dx / steps;
	yinc = (float) dy / steps;
	y = y1;
	x = x1;
	putpixel(ceil(x), ceil(y), 20);
	for (i = 0; i &lt; = steps; i++) {}

	getch();
}
```

**Output :**
**Enter the Co-ordinates :**

``` 50 100  200 300 ```
