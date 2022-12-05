#include <stdio.h>
int main ()
{
	float a,b,c;
	printf ("nhap diem toan ly hoa\n");
	scanf ("%f%f%f",&a,&b,&c);
	if (a>4&&b>4&&c>4&&(a+b+c)>=15 ){
		if (a>5&&b>5&&c>5){
		printf ("hoc deu cac mon"); 
	}
	
	    else if (a<5||b<5||c<5  ){
		
	    	printf ("hoc chua deu cac mon"); 
		}
	}
	
	  else    {
		printf ("thi hong"); 
		
	}  
 return 0;
 }

