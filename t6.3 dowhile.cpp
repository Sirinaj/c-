#include <stdio.h>
int main(){
	int a=2,l=100,sum=0;
	do{
		printf ("%d + ",a);
		sum +=a;
		a+=3;
	} 
	while (a<l);
	printf ("\n sum=%d",sum);
	return 0;
}
