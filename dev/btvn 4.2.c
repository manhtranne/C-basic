#include <stdio.h>
int main ()
{
	int a,b,c,d,max;
	printf("nhap a,b,c,d\n");
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	if (a>b&&a>c&&a>d){
		printf("max = %d",a);
	}
	else if (b>a&&b>c&&b>d){
		printf("max = %d",b);
	}
	else if (c>a&&c>b&&c>d){
		printf("max = %d",c);
	}
	else if (d>a&&d>b&&d>c){
		printf("max = %d",d);
	}
	    
	
 return 0;
 }

