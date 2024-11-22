#include <stdio.h>
int main(){
	int a,l=100,sum=0;
	for(a=2;a<l;a+=3){
		printf ("%d + ",a);
		sum+=a;
	}
	printf ("\n sum=%d",sum);
	return 0;
}
