#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main() 
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "..\\bgi");
    int x1, x2, y1, y2;
    int dx, dy, x, y, p, xend;
    
    
    cout << "Bresenhan's Line Drawing Algorithm\n\n";
    
    cout << "Enter the value of x1: ";
    cin >> x1;
    cout << "\nEnter the value of x2: ";
    cin >> x2;
    cout << "\nEnter the value of y1: ";
    cin >> y1;
    cout << "\nEnter the value of y2: ";
    cin >> y2;

    dx = abs(x1 - x2);
    dy = abs(y1 - y2);
    p = 2 * dy - dx;

    if (x1 > x2) {
        x = x2;
        y = y2;
        xend = x1;
    }
    else {
        x = x1;
        y = y1;
        xend = x2;
    }

    putpixel(x, y, 100);
    outtextxy(x1, y1, "(x1,y1)");
    outtextxy(x2, y2, "(x2,y2)");

    while (x < xend) {
        x = x + 1;
        if (p < 0) {
            p = p + 2 * dy;
        }
        else {
            y = y + 1;
            p = p + 2 * (dy - dx);
        }
        putpixel(x, y, 100);
    }

    getch();
    closegraph();
}
