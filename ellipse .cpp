//[6] Draw eclipse using graphics
//Program -

#include <graphics.h>
int main ()
{
int gt = DETECT,gm;
int x = 250, y=200;
int start_angle = 0;
int print_angle = 360;
int x_rad = 100;
int y_rad = 50;
initgraph (&gd, &gm, " ");
eclipse (x, y, Start_angle, x_rad, y_rad);
getch();
Closegraph();
return 0;
}