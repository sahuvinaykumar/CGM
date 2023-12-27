//[7] draw Rectangle using graphics
Program -
#include <graphics.h>
int main()
{
int gd =DETECT,gm;
int left = 150, top=150;
int right = 150, bottom=450;
initgraph (&gd, & gm, " ");
rectangle (left, top, right, bottom);
getch();
Closegraph();
return 0;
}