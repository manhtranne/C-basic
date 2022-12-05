//#include <stdio.h>
//int main ()
//{
//	int a;
//	printf ("nhap vao a");
//	scanf ("%d",&a);
//	switch(a){
//	  case 1:
//	  printf("chu nhat");
//	  break;
//	  case 2:  	
//	  printf("thu2");
//	  break;
//	  case 3:
//	  printf("thu 3");
//	  break;
//	  case 4:
//	  printf("thu 4");
//	  break;
//	  case 5:
//	  printf("thu 5");
//	  break;
//	  case 6:
//	  printf("thu 6");
//	  break;
//	  case 7:
//	  printf("thu 7");
//	  break; 
//	  break;
//	  }
//	 
// return 0;
// }



//#include <stdio.h>
//int main ()
//{
//	int a;
//	printf("nhap vao thang");
//	scanf ("%d",&a);
//	switch(a){
//		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//			printf("thang co 31 ngay");
//			break;
//		case 2:
//			printf("thang co 28 hoac 29 ngay ");
//			break;
//		case 4: case 6: case 9: case 11:
//			printf("thang co 30 ngay");
//			break;
//
//}
//return 0;
//}









#include <stdio.h>
int main ()
{
 int n;
 char can[10][10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
 char chi[12][10]={"Than","Dau","Tuat","Hoi","Ty'","Suu","Dan","Meo","Thin","Ty.","Ngo","Mui"};
 printf ("nhap vao so nam");
 scanf ("%d",&n);
 switch (n%10){
 	case 0:
	 printf("giap");
	 break; 
	case 1:
	 printf("at"); 
	 break; 
    case 2:
	 printf("binh");
	 break;  
    case 3: 
	 printf("dinh");
	 break;  
    case 4:
	 printf("mau");
	 break;  
	case 5 :
	printf ("ky");
	break; 	
	case 6 :
	printf ("canh");
	break; 	
	case 7 :
	printf ("tan");
	break; 	
	case 8 :
	printf ("nham");
	break; 	
	case 9 :
	printf ("quy");
	break; 
	}	
switch (n%12){
  case 0:
  printf("ty");
  break;  
  case 1:
  printf("suu");
  break;  
   case 2 :
  printf("dan");
  break;  
   case 3:
  printf("mao");
  break;  
   case 4 :
  printf("thin");
  break;  
   case 5:
  printf("ty");
  break;  
   case 6:
  printf("ngo");
  break;  
   case 7:
  printf("mui");
  break;  
   case 8:
  printf("than");
  break;  
   case 9:
  printf("dau");
  break;  
   case 10:
  printf("tuat");
  break;  
   case 11:
  printf("hoi");
  break;
  }
  return 0;
}
  
  

  

  
   




















		
		
	
