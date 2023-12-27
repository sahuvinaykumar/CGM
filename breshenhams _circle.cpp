[5] Bresenhams circle drawing algorithm
Program -
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
//function to put pixels
// at subsequences prints
void draw circle (int xc, int yc, int x, int y)
{
putpixel (xc+x, yc+y, RED);
putpixel (xc-x, yc+y, RED);
putpixel (xc+x, yc-y, RED);
putpixel (xc-x, yc-y, RED);
putpixel (xc+x, yc-y, RED);
putpixel (xc-x,yc-y,RED);
}
// function for Circle-generating using Bresenham's algo.
void circleBres (int xc, int yc, int x)
{
int x=0, y=r;
int d = 3-2*r;
draw.circle (xc, yc, x, y);
while (y>=x)
{
//for each pixels we will draw all eight 
x++ ;
// checking decision  parameter 
if (d>0)
{
 y-- ;
d=d+ 4* (x-y) +10;
}
else
d=d+4+x+6;
draw circle (xc, yc, x, y);
delay (50);
}
}
#driver Code
int main()
{
int xc= 50, yc=50, r=30;
initgraph(&gd, & gm, " ");
CircleBres(xc, yc, r);
return 0;
}