#include <stdio.h>
int main(){
	printf ("Please insert y : ");
	int y;
	scanf("%d",&y);
	if (y<0){
		printf ("%d is a negative number",y);
	}
	else if (y==0){
		printf ("%d is zero",y);
	}
	else {
		printf ("%d is a positive",y);
	}
	return 0;
}
