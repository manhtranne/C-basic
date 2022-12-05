#include <stdio.h>
int main ()
{
	int a,b,c,max;
	printf ("nhap vao a,b,c");
	scanf ("%d%d%d",&a,&b,&c);
	if (a<b&&a>c){
	 printf ("max=%d",b);
	 }
	else if (b<c&&b>a){
	  printf ("max = %d",c);
	  }
	else {
		printf ("max=%d",a);
		} 
	 	 
 return 0;
 }

