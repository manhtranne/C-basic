#include <stdio.h>
#include <math.h> 
int main ()
{
	float a,b,c,delta;
	float x,x1,x2;
	printf("nhap a,b,c\n");
	scanf ("%f%f%f",&a,&b,&c);
	if (a==0){
		printf ("x=%f",(float)-c/b); 
	} 
	else if (a!=0) {
	 
	 delta= b*b-4*a*c ;
	 printf ("delta=%.2f \n", delta); 	   
	 x1=(-b + sqrt(delta)) / (2*a );
	 x2=(-b - sqrt(delta)) / (2*a);
	 printf ("x1= %.2f\t x2= %.2f",x1,x2);
}
 return 0;
 }

