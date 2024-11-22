#include <stdio.h>
int main(){
	int gender;
	int age;
	printf("Enter gender(male=1,female=2) : ");
	scanf("%d",&gender);
	printf("Enter age : ");
	scanf("%d",&age);
	if(gender==1){
		if(age>30){
			printf ("Male Group 3");
		}
		else if (age>19){
			printf ("Male Group 2");
		}
		else{
			printf ("Male Group 1");
		}
	}
	else{
		if(age>30){
			printf ("Female Group 6");
		}
		else if (age>19){
			printf ("Female Group 5");
		}
		else{
			printf ("Female Group 4");
		}
	}
	return 0;
}

