//[8] Mid-point-circle drawing algorithm
//Program - 
#include<iostream.h>
#include<conio.h>
#include <graphics.h>
void main()
{
int xc,yc,x,y,r,gd=DETECT,gm,d;
x=0;
y=r;
d=1-r;
initgraph(&gd,&gm, "c:\\turbo 3 BGI");
cout<<"enter the center of co-ordinate of circle"<<endl
cin>>xc>>yc;
do
{
putpixel(xc+x,yc+y, 4); 
putpixel(xc+х, ус-у, 4);
putpixel(xc-х, ус+y, 4); 
putpixel(xc-х,ус-у, 4);
putpixel(xc+y,yc+x, 4);
putpixel(xc+у, ус-х, 4); 
putpixel(xc-у, ус+х, 4);
putpixel(xc-y,ус-х, 4);
if (d<0)
x=x+1;
y=y;
d=d+2*x+2;
}
else
{
x=x+1;
y=y-1;
d=d+2*(x-y)+1;
}
}
while(x<y);
getch();
closegraph();
}