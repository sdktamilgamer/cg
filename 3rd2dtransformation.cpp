#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

int main()
{
    int gd = DETECT, gm, s;
    initgraph(&gd, &gm, (char*)"..\\bgi");

    cout << "AAKASH K - 211191101001\n\n";
    cout << "1. Translation\t2. Rotation\n3. Scaling\t4. Reflection\n5. Shearing\n";
    cout << "\nSelection: ";
    cin >> s;

    switch (s)
    {
    case 1:
    {
        int x1 = 200, y1 = 150, x2 = 300, y2 = 250;
        int tx = 50, ty = 50;

        cout << "Rectangle before translation\n";
        setcolor(3);
        rectangle(x1, y1, x2, y2);

        setcolor(4);
        cout << "Rectangle after translation\n";
        rectangle(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
        getch();
        break;
    }
    case 2:
    {
        int x1 = 200, y1 = 200, x2 = 300, y2 = 300;
        double angle;

        cout << "Rectangle with rotation\n";
        setcolor(3);
        rectangle(x1, y1, x2, y2);

        cout << "Enter the angle of rotation: ";
        cin >> angle;

        angle = (angle * 3.14) / 180; // Convert to radians

        // Rotation logic
        int xr1 = x1 + int((x1 - x2) * cos(angle) - (y1 - y2) * sin(angle));
        int yr1 = y1 + int((x1 - x2) * sin(angle) + (y1 - y2) * cos(angle));

        int xr2 = x2 + int((x1 - x2) * cos(angle) - (y1 - y2) * sin(angle));
        int yr2 = y2 + int((x1 - x2) * sin(angle) + (y1 - y2) * cos(angle));

        // Display the rotated rectangle
        setcolor(2);
        rectangle(xr1, yr1, xr2, yr2);
        getch();
        break;
    }
    case 3:
    {
        int x1 = 30, y1 = 30, x2 = 70, y2 = 70, y = 2, x = 2;

        cout << "Before scaling\n";
        setcolor(3);
        rectangle(x1, y1, x2, y2);

        cout << "After scaling\n";
        setcolor(10);
        rectangle(x1 * x, y1 * y, x2 * x, y2 * y);
        getch();
        break;
    }
    case 4:
    {
        int x1 = 200, y1 = 300, x2 = 500, y2 = 300, x3 = 350, y3 = 400;

        cout << "Triangle before reflection\n";
        setcolor(3);
        line(x1, y1, x2, y2);
        line(x1, y1, x3, y3);
        line(x2, y2, x3, y3);

        cout << "Triangle after reflection\n";
        setcolor(5);
        line(x1, -y1 + 500, x2, -y2 + 500);
        line(x1, -y1 + 500, x3, -y3 + 500);
        line(x2, -y2 + 500, x3, -y3 + 500);
        getch();
        break;
    }
    case 5:
    {
        int x1 = 400, y1 = 100, x2 = 600, y2 = 100, x3 = 400, y3 = 200, x4 = 600, y4 = 200, shx = 2;

        cout << "Before shearing of rectangle\n";
        setcolor(3);
        line(x1, y1, x2, y2);
        line(x1, y1, x3, y3);
        line(x3, y3, x4, y4);
        line(x2, y2, x4, y4);

        cout << "After shearing of rectangle\n";
        x1 = x1 + shx * y1;
        x2 = x2 + shx * y2;
        x3 = x3 + shx * y3;
        x4 = x4 + shx * y4;

        setcolor(13);
        line(x1, y1, x2, y2);
        line(x1, y1, x3, y3);
        line(x3, y3, x4, y4);
        line(x2, y2, x4, y4);
        getch();
        break;
    }
    default:
    {
        cout << "Invalid Selection\n";
        break;
    }
    }

    closegraph();
    return 0;
}
