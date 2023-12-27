//[1] Drawing line using general method
//Program-
#include<iostream.h>
#include<conio.h>
#include <graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd, &gm, " ");
line (250, 150,450, 150);
getch();
closegraph();
return 0;
}