#include <stdio.h>
#include <math.h>
int main ()
{

int opt,subopt,m,y,n; 
float a,b,c,p,s;
	printf ("-------------MENU----------\n");
	printf ("---1. thang nam -------------\n");
	printf ("---2.kiem tra so nguyen-------\n");
	printf ("---3.kiem tra tam giac\n");
	printf ("---4.thoat--------------------\n");
	printf ("moi ban lua chon ");
	scanf ("%d",&opt);
	switch(opt){
	case 1:
	printf ("nhap thang nam \n");
	scanf ("%d%d",&m,&y);
		    switch (m)
            {
            case 1:
            	printf ("thang 1 co 31 ngay thuoc quy 1\n"); 
            	break;
            case 2:
            	if(y%4==0){
				printf ("thang  co 29 ngay thuoc quy 1");
            }else{
			    printf ("thang co 28 ngay thuoc quy 1");
				break;
			}
			 break ; 
			case 3:
            	printf ("thang co 31 ngay thuoc quy 1 "); 
            	break;
            case 4:
            	printf ("thang  co 30 ngay thuoc quy 2"); 
            	break;
            case 5:
            	printf ("thang  co 31 ngay thuoc quy 2"); 
            	break;
            case 6:
            	printf ("thang  co 30 ngay thuoc quy 2"); 
            	break;
            case 7:
            	printf ("thang  co 31 ngay thuoc quy 3"); 
            	break;
            case 8:
            	printf ("thang co 31 ngay thuoc quy 3"); 
            	break;
            case 9:
            	printf ("thang co 30 ngay thuoc quy 3"); 
            	break;
            case 10:
            	printf ("thang  co 31 ngay thuoc quy 4"); 
            	break;
            case 11:
            	printf ("thang  co 30 ngay thuoc quy 4"); 
            	break;
            case 12:
            	printf ("thang  co 31 ngay thuoc quy 4"); 
            	break;
            default :
			printf ("Vui long nhap thang tu 1 -> 12");
                break;
            }
				break ; 
   case 2:
       printf ("nhap vao 1 so nguyen");
	   scanf ("%d",&n);
	   if (n%2==0){
	   	printf ("so %d chia het cho 2",n); 
	   } 
	   else{
	   	printf ("so %d khong chia het cho 2",n) ;
	   }
	   	 
 case 3:
      printf ("nhap vao 3 canh \n");
      scanf ("%f%f%f",&a,&b,&c); 
      if (a+b>c&&a+c>b&&b+c>a){
      	printf ("day la canh cua 1 tam giac");
		  p = a+b+c;
		  printf ("chu vi tam giac la %.2f\n",p);
		  
		  s=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
		  printf ("dien tich tam giac la %.2f\n",s); 
	  } 
	  else {
	  	printf ("day khong phai canh cua tam giac"); 
	  }
 case 4:
	     printf ("Thoat chuong trinh");
		   break;
	   default:
	        printf ("Ban nhap sai");
		    break;     
	   
}

 return 0;
 }

