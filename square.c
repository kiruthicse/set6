#include<stdio.h>
#include<conio.h>
void main()
{
int distSq(Point n, Point k)

{

    return (n.x - k.x)*(n.x - k.x) +

           (n.y - k.y)*(n.y - k.y);

}
bool isSquare(Point n1, Point n2, Point n3, Point n4)

{

    int d2 = distSq(n1, n2); 

    int d3 = distSq(n1, n3);  

    int d4 = distSq(n1, n4);  

    if (d2 == d3 && 2*d2 == d4)

    {

        int d = distSq(n2, n4);

        return (d == distSq(n3, n4) && d == d2);

    }

    if (d3 == d4 && 2*d3 == d2)

    {

        int d = distSq(n2, n3);

        return (d == distSq(n2, n4) && d == d3);

    }

    if (d2 == d4 && 2*d2 == d3)

    {

        int d = distSq(n2, n3);

        return (d == distSq(n3, n4) && d == d2);

    }

 

    return false;
}
}
