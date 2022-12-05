
#include <stdio.h>
int main ()
{
	int hh,mm,ss,t;
	printf ("nhap vao gio phut giay:\n");
	scanf ("%d%d%d",&hh,&mm,&ss);
	printf ("nhap vao so giay cong them:\n ");
	scanf ("%d",t);
	if (ss+t<60){
		ss=ss+t; 
	} 
	else {
		ss=(ss+t)-60;
		mm=mm+1; 
	}
	if (mm>=60){
		mm = mm-60;
		hh=hh+1; 
	}
	printf ("\n gio:phut:giay la %.2d%.2d%.2d",hh,mm,ss); 

	 
 return 0;
 }

