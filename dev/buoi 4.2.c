#include <stdio.h>
int main ()
{
	int a;
	printf ("nhap a");
	scanf ("%d",&a); 
	if (a>0 && a%2==0){ 
		printf("  la so duong chan"); 
		}
	else if(a>0 && a%2==1){
	 printf ("la so duong le ");
	}		 
	else if(a<0 && a%2==0){
	    printf ("la so am chan ");
	}
	
	 if (a<0 && a%2==-1 ){
		printf ("la so am le ");
	}
	else {
		printf("a la so 0"); 
	}	
	 
 return 0;
 }

