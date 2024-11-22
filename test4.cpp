#include <stdio.h>
#include <conio.h>
main(){
	int x,y;
	printf ("Enter number 1 = ");
	scanf ("%d",&x);
	printf ("Enter number 2 = ");
	scanf ("%d",&y);
	printf ("-----------------------------------------\n");
	printf ("%d == %d Boolean = %d\n",x,y,x==y);
	printf ("%d != %d Boolean = %d\n",x,y,x!=y);
	printf ("%d > %d Boolean = %d\n",x,y,x>y);
	printf ("%d < %d Boolean = %d\n",x,y,x<y);
	printf ("%d && %d Boolean = %d\n",x,y,x&&y);
	printf ("%d || %d Boolean = %d\n",x,y,x||y);
	printf ("!%d Boolean = %d\n",y,!y);
	getch();
}
