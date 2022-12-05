#include <stdio.h>
#include <math.h> 
int main ()
{
	int opt,subopt,n,d,max;
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
    case 2:
	  printf ("%.2f-%.2f=%.2f",a,b,a-b);
	  break;
	case 3:
	  printf ("%.2f*%.2f=%.2f",a,b,a*b);
	  break;
	case 4:
	  printf ("%.2f/%.2f=%.2f",a,b,a/b);
	  break;
	  }
 case 2:
      printf("nhap vao 3 so a,b,c");
	  scanf ("%f%f%f",&a,&b,&c);
	  if(a>b&&a>c){
	  printf ("max=%.2f",a);
	  }
	  else if(b>a&&b>c){
	  printf ("max=%.2f",b);
	  }
	  else{
	  printf ("max=%.2f",c);
	  }	  
 case 3:
    printf ("nhap vao so nguyen duong");
	scanf ("%d",&n);
	if(n>0){
		if d=sqrt(n){ 
	printf ("n la so chinh phuong");

	}
	else{
	printf("n khong phai la so chinh phuong");
	} 	  
	  
	  } 
 return 0;
 }

