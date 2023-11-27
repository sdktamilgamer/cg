#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

void draw(int x1, int y1, int x2, int y2);

void main()
{
    int x1, y1, x2, y2;
    int gd = DETECT, gm, gerror;
    
    initgraph(&gd, &gm, "..\\bgi");
    printf("\n\nEnter the x and y value for starting point:\n");
    scanf("%d%d", &x1, &y1);
    
    printf("\nEnter the x and y value for ending point:\n");
    scanf("%d%d", &x2, &y2);
    
    printf("\nThe Line is shown below:\n");
    draw(x1, y1, x2, y2);
    
    getch();
}

void draw(int x1, int y1, int x2, int y2)
{
    float x, y, xinc, yinc, dx, dy;
    int k;
    int step;
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    if (abs(dx) > abs(dy))
        step = abs(dx);
    else
        step = abs(dy);
    
    xinc = dx / step;
    yinc = dy / step;
    
    x = x1;
    y = y1;
    
    putpixel(x, y, 1);
    
    for (k = 1; k <= step; k++)
    {
        x = x + xinc;
        y = y + yinc;
        putpixel(x, y, 2);
    }
}
