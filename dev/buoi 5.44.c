//#include <stdio.h>
//int main ()
//{
//	int a;
//	printf("nhap thang ");
//	scanf("%d",&a);
//	switch (a){
//		case 1:
//		case 2:
//		case 3:
//	printf ("quy 1");
//	    break;	
//		case 4:
//		case 5:
//		case 6:
//	printf ("quy 2");
//	    break;	
//		case 7:
//		case 8:
//		case 9:
//	printf ("quy 3");
//	    break;
//		case 10:
//		case 11:
//		case 12:
//	printf ("quy 4");
//	    break;			
//	}
// return 0;
// }




#include <stdio.h>
int main ()
{
	int a;
	printf("nhap vao so a");
	scanf ("%d",&a);
	switch(a%2){
		case 0:
		printf ("%d la so chan",a);
		break;
		case 1:
		printf ("%d la so le",a);
		break;	
	} 
return 0;
}
	


