#include<iostream.h>
#include<graphics.h>
#include<conio.h>


int main()
{
	int xc, yc, x, y, r, d;
	int gdriver=DETECT, gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	cout << "Enter co-ordinate  of center ";
	cin >> xc >>yc;
	cout << "Enter radius : ";
	cin >> r;
	d = 3-2*r;

	x=0;
	y=r;
	while(x <=y)
	{
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc-y,yc-x,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc+x,WHITE);



		if(d<0)
		{
			d = d+4*x+6;
		}
		else
		{
			d=d+4*(x-y)+10;
			y--;
		}
		x++;
	}


getch();
return 0;
}
