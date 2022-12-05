#include <stdio.h>
#include <math.h> 
int main ()
{
	int opt,subopt,n,d;
	float a,b,c;
	printf ("-------------MENU----------\n");
	printf ("---1.phep tinh-------------\n");
	printf ("---2.tim so lon nhat-------\n");
	printf ("---3.kiem tra so chinh phuong\n");
	printf ("---4.thoat--------------------\n");
	printf ("moi ban lua chon ");
	scanf ("%d",&opt);
	switch(opt){
	case 1:
	  printf ("nhap a,b");
	  scanf ("%f%f",&a,&b);
	  printf ("------------MENU---------\n");
	  printf ("---1.phep cong-----------\n");
	  printf ("---2.phep tru------------\n");
	  printf ("---3.phep chia-----------\n");
	  printf ("---4.phep nhan-----------\n");
	  printf ("moi ban lua chon");
	  scanf  ("%d",&subopt);
	switch (subopt){
	case 1:
	  printf ("%.2f+%.2f=%.2f",a,b,a+b);
	  break;
	  }
	  } 
 return 0;
 }

