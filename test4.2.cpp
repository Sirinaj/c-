#include <stdio.h>
#include <conio.h>
main(){
	int a,b,c,d;
	printf ("Enter number a = ");
	scanf ("%d",&a);
	printf ("Enter number b = ");
	scanf ("%d",&b);
	printf ("a + b = %d\n",a+b);
	printf ("a * b = %d\n",a*b);
	printf ("a % b = %d\n",a%b);
	printf ("a++ = %d\n",a++);
	printf ("++b = %d\n",++b);
	c=5;
	printf ("c = %d\n",c--);
	d=c+2;
	printf ("d = %d\n",++d);
	printf ("c = %d d = %d\n",c,d);
	getch();
}
