//#include <stdio.h>
//#include <math.h> 
//int main ()
//{
//	int opt,subopt,n,d;
//	float a,b,c; 
//	printf ("              MENU           \n");
//	printf ("---1. tinh toan---------------\n");
//	printf ("---2. tim so lon nhat---------\n");
//	printf ("---3. tim so chinh phuong------\n");
//	printf ("---4. thoat--------------------\n ");
//	printf ("moi ban lua chon: ");
//	scanf ("%d",&opt);
//	switch (opt){
//	case 1:
//			printf("nhap vao 2 so a va b:");
//			scanf("%f%f", &a, &b);
//			printf("------------------------------------\n");
//			printf("!               MENU               !\n");
//			printf("--------------1. Cong---------------\n");
//			printf("--------------2. Tru----------------\n");
//			printf("--------------3. Nhan---------------\n");
//			printf("--------------4. Chia---------------\n");
//			printf("nhap 1,2,3,4 de tiep tuc ,,,,\n");
//			scanf("%d", &subopt);
//			switch (subopt){ 
//	case 1:
//	printf ("\n%.1f+%.1f=%.1f",a,b,a+b);
//    break; 
//    case 2:
//	printf ("\n%.1f-%.1f=%.1f",a,b,a-b);
//    break; 
//    case 3:
//	printf ("\n%.1f*%.1f=%.1f",a,b,a*b);
//    break; 
//    case 4:
//	printf ("\n%.1f/%.1f=%.1f",a,b,a/b);
//    break;
//	default:
//	printf("ban nhap sai");
//	break;
//	}
//	break; 
//	
//case 2:
//    printf("/n Nhap vao 3 so a,b,c");
//	scanf ("%f%f%f",&a,&b,&c);
//	float max=a;
//	if (b>max)
//	{max=b;}
//	if (c>b)
//	{max=c;}
//	printf ("so lon nhat la %.1f",max);
//	break;
//case 3:
//	 printf ("nhap vao so nguyen duong:");
//	 scanf ("%d",&n);
//	 if(n>0){
//	 d=sqrt(n); 
//	 if ((d*d)==n) 
//	 printf ("so ban vua nhap la so chinh phuong ");
//	 else 
//	 printf ("so ban vua nhap khong phai la so chinh phuong ");
//	  }
//	  break; 
//case 4: 
//printf ("thoat chuong trinh ");
//break;
//default:
//printf ("ban nhap sai");
//break; 
// }
// 
// 
// return 0; 
// }





#include <stdio.h>
#include <math.h> 
int main ()
{
	int opt,subopt,so;
	float a,b,c; 
	printf ("              MENU           \n");
	printf ("---1. bang cuu chuong ---------------\n");
	printf ("---2. ngay---------\n");
	printf ("---3. tam giac------\n");
	printf ("---4. thoat--------------------\n ");
	printf ("moi ban lua chon: ");
	scanf ("%d",&opt);
	switch (opt){
	case 1: 
	   printf ("nhap vao so a");
	   scanf ("%f",&a);
	   printf ("%.2f*1=%.2f\n",a,a*1);
	   printf ("%.2f*2=%.2f\n",a,a*2);
	   printf ("%.2f*3=%.2f\n",a,a*3);
	   printf ("%.2f*4=%.2f\n",a,a*4);
	   printf ("%.2f*5=%.2f\n",a,a*5);
	   printf ("%.2f*6=%.2f\n",a,a*6);
	   printf ("%.2f*7=%.2f\n",a,a*7);
	   printf ("%.2f*8=%.2f\n",a,a*8);
	   printf ("%.2f*9=%.2f\n",a,a*9);
	   printf ("%.2f*10=%.2f\n",a,a*10);
	   break ;

	case 2:
	   printf ("nhap so");
	   scanf ("%d",& so);
	   switch (so) {
	   case 0:
	   printf ("thu7\n");
	   break; 
	   case 1:
	   printf("chu nhat\n ");
	    break;
	   case 2:
	   printf ("thu 2\n");
	    break;
	    case 3:
	   printf ("thu 3\n");
	    break;
	    case 4:
	   printf ("thu 4\n");
	    break;
	    case 5:
	   printf ("thu 5\n");
	    break;
	    case 6:
	   printf ("thu 6\n");
	   break;	
	   }  
	case 3:
	printf("nhap vao 3 canh cua tam giac ");
	scanf ("%f%f%f",&a,&b,&c);
	if (a+b>c&&a+c>b&&c+b>a){
		printf ("day la 3 canh cua 1 tam giac");	 
	}
	else{
		printf ("day khong phai 3 canh cua mot tam giac"); 
	} 
	case 4:
	   printf ("thoat");  
}
				
return 0;
			}
		
		






























