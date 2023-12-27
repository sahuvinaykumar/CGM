[4] Bresenhams line generation algorithm
Program -

#include<iostream>
using namespace std;
// function for line generation
void bresenham (int x1, int y1, int x2, int y2)
{
int n_new=z* (y2-y1);
int slope_Error_new = m_new_(2-4);
for (int x = x1, y=y1; x <=y2; x++)
{
cout << " " <<x<<"," << y<<< ") \n";
// Add Slope to increment angle formed
 Slope_Error_new += m_new;
// slope, Error reached limit, time to
/ / increment y & Update slope Error
if (Slope_Erran_new >=0)
{
y++;
Slope_Error_new == 2*(x2ーx1):
}
}
}
// driverCode
int main ()
{
int x1=3, y1= 2, x2=15,y2 = 5;
// function call
bresenham (x1, y1, x2,y2);
}