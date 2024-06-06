#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <graphics.h>




int main ()
{
int x1, x2, y1, y2;
int gdriver=DETECT, gmode;
initgraph(&gdriver,&gmode, "C:\\TURBOC3\\BGI");

cout<<"Enter first point co-ordinate: ";
cin >> x1 >> y1;
cout << "Enter second point co-ordinate: ";
cin >> x2 >> y2;


int dx = abs(x2-x1);
int dy = abs(y2-y1);
int p = 2*dy - dx;


int x = x1;
int y = y1;

while(x<x2)
{
	putpixel(x,y,10);
	if (p >= 0)
	{
		y++;
		p = p + 2*dy - 2*dx;
		
	}
	else
	{
		p = p + 2*dy;
	}
	x++;
}
getch();
return 0;
}

