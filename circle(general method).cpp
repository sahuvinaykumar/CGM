//[2] Drawing circle using general method
//Program -
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
int main ()
{
int gd = DETECT, gm;
initgraph (&gd, & gm," ");
Circle (250, 200, 50); 
getch();
Close graph();
return 0;
}