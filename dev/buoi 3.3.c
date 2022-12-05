#include <stdio.h>
#include <math.h>
int main ()
{
	float a, b, c, delta;
	float x, x1 , x2 ;
	printf ("nhap vao so a \n");
	scanf ("%f", &a);
	printf ("nhap vao so b \n");
	scanf ("%f", &b);
	printf ("nhap vao so c \n");
	scanf ("%f", &c);
	delta = b*b - 4*a*c ;
	printf ("delta = %.2f \n", delta);   
    x1 = (-b + sqrt(delta)) /  (2*a);
    x2 = (-b - sqrt(delta)) /  (2*a);
    x = -b/a;
	printf("x1 = %.2f\t x2= %.2f", x1 , x2);
return 0;
 }

