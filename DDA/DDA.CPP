// Include necessary preprocessors for input/output,
// mathematical functions, console interaction and graphical function
#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <graphics.h>

// start function and initialize variables
int main ()
{
int x1, x2, y1, y2, step, i;
// initialize graphics environment and its drivers
int gdriver=DETECT, gmode;
initgraph(&gdriver,&gmode, "C:\\TURBOC3\\BGI");

// Take input from user for starting and end points
cout<<"Enter first point p1: ";
cin >> x1 >> y1;
cout << "Enter second point p2: ";
cin >> x2 >> y2;

// calculate the difference from its x and y co-ordinates
int dx = abs(x2-x1);
int dy = abs(y2-y1);


// LOGIC -
// Its a simpler approach to linearly interpolate between
// two endpoints to draw a line. First we calculate steps(number of steps
// needed to approximate the line between 2 end points. step determines
// how many iterations the algorithm will perform to draw a line)
// Then we check the condition whether m is greater or less than 1.
// if m is less than 1(ie dx > dy), we will use dx as a step otherwise dy
// After this we plot the x and y and draw its pixel based on step value
// and dx , dy value

if (dx > dy)
	step=dx;
else
step = dy;
dx = dx / step;
dy = dy / step;

int x = x1;
int y = y1;

for (i=1; i<= step;i++)
{
putpixel(x,y,5);
x = x + dx;
y = y + dy;
}
getch();
return 0;
}

