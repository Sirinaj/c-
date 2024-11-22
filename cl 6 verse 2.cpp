#include <stdio.h>
int main(){
	int width,lenght;
	printf ("Please insert width : ");
	scanf ("%d",&width);
	printf ("Please insert lenght : ");
	scanf ("%d",&lenght);
	for (int i=1;i<=width+2;i++){
		printf ("*");
		for(int j=1;j<lenght+1;j++){
			if (i==1 || i==width+2){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("*");
		printf("\n");
		}
	return 0;
}
