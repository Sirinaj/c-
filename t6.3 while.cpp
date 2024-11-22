#include <stdio.h>
int main(){
	int a=2,l=100,sum=0;
	while (a<l){
		printf ("%d + ",a);
		sum+=a;
		a+=3;
	}
	printf ("\n sum=%d",sum);
	return 0;
}
