#include <stdio.h>
#include <conio.h>
main(){
	int a=4,b=3,c=5,d=0;
	printf ("a % b = %d\n",a%b);
	printf ("a == b = %d\n",a==b);
	printf ("a = d = %d\n",a=d);
	printf ("a != b = %d\n",a!=b);
	printf ("c && b = %d\n",c&&b);
	printf ("a && d = %d\n",a&&d);
	printf ("a<b || d<c = %d\n",a<b||d<c);
	printf ("a+b && c<d = %d\n",a+b&&c<d);
	getch();
}
