//[3] drawing smile face using general method
//Program-
#indude <iostream.h>
#include <conio.h>
#include <graphics.h>
int main()
{
int gd = DETECT ,gm;
initgraph (&gd, & gm, " ");
Circle (300, 250, 200);  // circle 1 face 
Circle (220, 160, 20);  // circle 2 Eye 1 
Cincle (380, 160, 20); // circle 3 Eye 2
arc (210, 300, 420, 300, 150); // arc for smile
getch();
Closegraph();
return 0;
}