#include <stdio.h>
int main ()
{
	float a,b,c,d,e,f,x,y;
	printf ("Enter a=");
	scanf ("%f",&a);
	printf ("Enter b=");
	scanf ("%f",&b);
	printf ("Enter c=");
	scanf ("%f",&c);
	printf ("Enter d=");
	scanf ("%f",&d);
	printf ("Enter e=");
	scanf ("%f",&e);
	printf ("Enter f=");
	scanf ("%f",&f);
	// a*x + b*y = c;
	printf ("%f*x + %f*y = %f\n",a,b,c);
	// d*x+e*y = f;
	printf ("%f*x + %f*y = %f\n",d,e,f);
	x= (c*e - b*f)/(a*e-d*b);
	printf ("x=%f",x);
	y= (c*d - a*f)/(a*e-d*b);
	printf ("%f=",y );
	 
	
 return 0;
 }

