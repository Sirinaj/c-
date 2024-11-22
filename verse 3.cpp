#include <stdio.h>
#include <conio.h>
main(){
	float reduis,lenght,width,ans;
	int verse;
	printf ("#######################################\n");
	printf ("Please serect menu\n  1. Circle Area\n  2. Square Area\n");
	printf ("#######################################\n");
	printf ("Select : ");
	scanf ("%d",&verse);
	printf ("#######################################\n");
	printf ("You Selected to calculate ");
	switch (verse){
		case 1 : printf ("1.Circle Area\n");break;
		case 2 : printf ("2. Square Area\n"); break;
		default : printf ("Error\n");
	}
	if(verse==1){
		printf ("  >Please insert redius : ");
		scanf ("%f",&reduis);
		ans = 3.14*reduis*reduis;
		printf ("The area of circle is : %.2f\n",ans);
	}
	else if(verse==2){
		printf ("  >Please insert lenght : ");
		scanf ("%f",&lenght);
		printf ("  >Please insert width : ");
		scanf ("%f",&width);
		ans = lenght*width;
		printf ("The area of square is : %.2f\n",ans);
	}
	else {
		printf ("Error\n");
	}
	printf ("#######################################\n");
	getch();
}
