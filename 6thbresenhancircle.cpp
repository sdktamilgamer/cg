#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>

void main() {
    int xc, yc, x, y, r, p;
    int gd = DETECT, gm;
    
    initgraph(&gd, &gm, "..\\bgi");
    cleardevice();
    
    
    printf("Bresenham's Circle Generating Algorithm\n\n");
    
    printf("Enter the value of Centre (xc, yc) and radius: ");
    scanf("%d%d%d", &xc, &yc, &r);
    
    p = 3 - 2 * r;
    x = 0;
    y = r;
    
    while (x <= y) {
        putpixel(xc + x, yc - y, 40);
        putpixel(xc + x, yc + y, 40);
        putpixel(xc - x, yc + y, 40);
        putpixel(xc - x, yc - y, 40);
        putpixel(xc - y, yc - x, 40);
        putpixel(xc - y, yc + x, 40);
        putpixel(xc + y, yc - x, 40);
        putpixel(xc + y, yc + x, 40);
        
        if (p < 0)
            p = p + 4 * x + 6;
        else {
            p = p + 4 * x - 4 * y + 10;
            y = y - 1;
        }
        
        x = x + 1;
    }
    
    setcolor(12);
    outtextxy(300, 275, "CIRCLE");
    
    getch();
    closegraph();
}
