#include <stdio.h>
int main(){
	int s,num,sum;
	printf("Enter number : ");
	for(int i=0;i<10;i++){
		scanf("%d",&num);
		if(num%2 == 0){
			s = num;
			sum += s;
			printf("%d",s);
			printf (" + ");
		}
	}
	
	printf("\nSum : %d",sum);
	return 0;
}
