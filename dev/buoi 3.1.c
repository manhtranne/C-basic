#include <stdio.h>
int main ()
{
	const float PI=3.14;
	float r;
	double s=0, v=0;
	printf ("nhap vao ban kinh");
	scanf ("%f", &r);
	s = 4 * PI * r * r;
	printf ("dien tich hinh cau = %fm2\n",s);
	v = (4/3) * PI * r * r * r ;
	printf ("the tich hinh cau = %fm3",v);
 return 0;
 }

