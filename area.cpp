#include <stdio.h>
float a,b,c;
void tri(void){
	printf("width : ");
	scanf ("%f",&a);
	printf ("high : ");
	scanf ("%f",&b);
	c=0.5*a*b;
	printf ("Area : %.2f\n",c);
}
void rect(void){
	printf("width : ");
	scanf ("%f",&a);
	printf ("length : ");
	scanf ("%f",&b);
	c=a*b;
	printf ("Area : %.2f\n",c);
}
main(){
	int i,d;
	printf ("Select triangle(1) or rectangle(2) : ");
	scanf ("%d",&d);
	if (d==1){
		for(i=0;i<5;i++){
		tri();}
	}
	else if (d==2){
		for(i=0;i<5;i++){
		rect();}
	}
}
